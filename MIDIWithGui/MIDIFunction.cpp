#include "Need.h"

int r;
class keymonitor {
public:
	void read() {
		play = 100 << 16 | 0x90 | 0 << 8 | 1;
		for (int i = 1; i <= 7; i++) {
			if (Get(midikey[i]) & 0x8000 || Get(i + 48) & 0x8000) {
				//ASCII码‘0’= 48，字母的顺序不是按照自然顺序，所以打表
				//监测键盘
				//正常音
				if (!pitchJudge) {
					r = pitch[i + 7];
				}
				else {
					r = otherPitch[i + 7];
				}
				judge = true;
				if (Get(VK_RETURN)) {
					//升半音
					r++;
				}
				if (Get(VK_SHIFT)) {
					//降半音
					r--;
				}
			}
		}
	}
}key;
class MIDIwork : public keymonitor {//实现MIDI功能
public:
	void normal(int r) {
		//播放对应声音 普通模式mode 1
		play = 100 << 16 | 0x90 | r << 8 | 1;
		midimsg(handle, play);
		Sleep(210);
		judge = false;
		if (longTimbreJudge == true) {
			play = 100 << 16 | 0x80 | r << 8 | 1;
			midimsg(handle, play);
		}
	}
	void chord(int r) {
		//和弦模式mode 2
		if (longTimbreJudge == false) {
			play = 100 << 16 | 0x90 | r << 8 | 1;
			midimsg(handle, play);
			play = 100 << 16 | 0x90 | (r + 4) << 8 | 2;
			midimsg(handle, play);
			play = 100 << 16 | 0x90 | (r + 7) << 8 | 3;
			midimsg(handle, play);
			Sleep(210);
		}
		else {
			play = 100 << 16 | 0x90 | r << 8 | 1;
			midimsg(handle, play);
			play = 100 << 16 | 0x90 | (r + 4) << 8 | 2;
			midimsg(handle, play);
			play = 100 << 16 | 0x90 | (r + 7) << 8 | 3;
			midimsg(handle, play);
			Sleep(210);
			play = 100 << 16 | 0x80 | r << 8 | 1;
			midimsg(handle, play);
			play = 100 << 16 | 0x80 | (r + 4) << 8 | 2;
			midimsg(handle, play);
			play = 100 << 16 | 0x80 | (r + 7) << 8 | 3;
			midimsg(handle, play);
		}
		judge = false;
	}
	void arp(int r) {
		//琶音模式mode 3
		if (longTimbreJudge == false) {
			play = 100 << 16 | 0x90 | r << 8 | 1;
			midimsg(handle, play);
			Sleep(150);
			play = 100 << 16 | 0x90 | (r + 4) << 8 | 2;
			midimsg(handle, play);
			Sleep(150);
			play = 100 << 16 | 0x90 | (r + 7) << 8 | 3;
			midimsg(handle, play);
			Sleep(210);
			play = 100 << 16 | 0x80 | r << 8 | 3;
			play = 100 << 16 | 0x80 | (r + 4) << 8 | 3;
			play = 100 << 16 | 0x80 | (r + 7) << 8 | 3;
		}
		else {
			play = 100 << 16 | 0x90 | r << 8 | 1;
			midimsg(handle, play);
			Sleep(150);
			play = 100 << 16 | 0x80 | r << 8 | 1;
			midimsg(handle, play);
			Sleep(10);
			play = 100 << 16 | 0x90 | (r + 4) << 8 | 2;
			midimsg(handle, play);
			Sleep(150);
			play = 100 << 16 | 0x80 | (r + 4) << 8 | 2;
			midimsg(handle, play);
			Sleep(10);
			play = 100 << 16 | 0x90 | (r + 7) << 8 | 3;
			midimsg(handle, play);
			Sleep(150);
			play = 100 << 16 | 0x80 | (r + 7) << 8 | 3;
			midimsg(handle, play);
			Sleep(10);
		}
		judge = false;
	}
}midi;
//以下是一个总的函数，主函数内开多线程用
void midiwork() {
	midiOutOpen(&handle, 0, 0, 0, CALLBACK_NULL);
	midimsg(handle, 0xC100);//初始化音色
	midimsg(handle, 0xC200);
	midimsg(handle, 0xC300);
	mode[1] = true;//初始化模式
	modebefore = 1;
	while (1) {
		if (!Get(VK_CONTROL)) key.read();//监测键盘信号，且避免快捷方式切换模式时有声音
		if (judge == true) {
			if (mode[1]) midi.normal(r);
			if (mode[2]) midi.chord(r);
			if (mode[3]) midi.arp(r);
		}
		r = 0;
		if (Get(VK_ESCAPE) & 0x8000)break;//关闭
	}
	midiOutClose(handle);
}