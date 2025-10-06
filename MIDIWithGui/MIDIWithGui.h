#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MIDIWithGui.h"
#include "Need.h"
#include "MIDI.h"
#include <QPushButton>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QButtonGroup>
#include <QRadioButton>
class MIDIWithGui : public QMainWindow
{
    Q_OBJECT
public slots:
    void clickWhiteKey(int i) {//°×¼ü²Ûº¯Êý
        if (mode[1]) {
            if (longTimbreJudge == true) {
                play = 100 << 16 | 0x90 | pitch[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(210);
                play = 100 << 16 | 0x80 | pitch[i] << 8 | 1;
                midimsg(handle, play);
            }
            else {
                play = 100 << 16 | 0x90 | pitch[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(210);
            }
        }
        if (mode[2]) {
            if (longTimbreJudge == false) {
                play = 100 << 16 | 0x90 | pitch[i] << 8 | 1;
                midimsg(handle, play);
                play = 100 << 16 | 0x90 | (pitch[i] + 4) << 8 | 2;
                midimsg(handle, play);
                play = 100 << 16 | 0x90 | (pitch[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(210);
            }
            else {
                play = 100 << 16 | 0x90 | pitch[i] << 8 | 1;
                midimsg(handle, play);
                play = 100 << 16 | 0x90 | (pitch[i] + 4) << 8 | 2;
                midimsg(handle, play);
                play = 100 << 16 | 0x90 | (pitch[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(210);
                play = 100 << 16 | 0x80 | pitch[i] << 8 | 1;
                midimsg(handle, play);
                play = 100 << 16 | 0x80 | (pitch[i] + 4) << 8 | 2;
                midimsg(handle, play);
                play = 100 << 16 | 0x80 | (pitch[i] + 7) << 8 | 3;
                midimsg(handle, play);
            }
        }
        if (mode[3]) {
            if (longTimbreJudge == false) {
                play = 100 << 16 | 0x90 | pitch[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x90 | (pitch[i] + 4) << 8 | 2;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x90 | (pitch[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(210);
                play = 100 << 16 | 0x80 | pitch[i] << 8 | 3;
                play = 100 << 16 | 0x80 | (pitch[i] + 4) << 8 | 3;
                play = 100 << 16 | 0x80 | (pitch[i] + 7) << 8 | 3;
            }
            else {
                play = 100 << 16 | 0x90 | pitch[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x80 | pitch[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(10);
                play = 100 << 16 | 0x90 | (pitch[i] + 4) << 8 | 2;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x80 | (pitch[i] + 4) << 8 | 2;
                midimsg(handle, play);
                Sleep(10);
                play = 100 << 16 | 0x90 | (pitch[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x80 | (pitch[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(10);
            }
        }
    }
    void clickBlackKey(int i) {//ºÚ¼ü²Ûº¯Êý  
        if (mode[1]) {
            if (longTimbreJudge == true) {
                play = 100 << 16 | 0x90 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(210);
                play = 100 << 16 | 0x80 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
            }
            else {
                play = 100 << 16 | 0x90 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(210);
            }
        }
        if (mode[2]) {
            if (longTimbreJudge == false) {
                play = 100 << 16 | 0x90 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
                play = 100 << 16 | 0x90 | (pitchForBlack[i] + 4) << 8 | 2;
                midimsg(handle, play);
                play = 100 << 16 | 0x90 | (pitchForBlack[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(210);
            }
            else {
                play = 100 << 16 | 0x90 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
                play = 100 << 16 | 0x90 | (pitchForBlack[i] + 4) << 8 | 2;
                midimsg(handle, play);
                play = 100 << 16 | 0x90 | (pitchForBlack[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(210);
                play = 100 << 16 | 0x80 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
                play = 100 << 16 | 0x80 | (pitchForBlack[i] + 4) << 8 | 2;
                midimsg(handle, play);
                play = 100 << 16 | 0x80 | (pitchForBlack[i] + 7) << 8 | 3;
                midimsg(handle, play);
            }
        }
        if (mode[3]) {
            if (longTimbreJudge == false) {
                play = 100 << 16 | 0x90 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x90 | (pitchForBlack[i] + 4) << 8 | 2;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x90 | (pitchForBlack[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(210);
                play = 100 << 16 | 0x80 | pitchForBlack[i] << 8 | 3;
                play = 100 << 16 | 0x80 | (pitchForBlack[i] + 4) << 8 | 3;
                play = 100 << 16 | 0x80 | (pitchForBlack[i] + 7) << 8 | 3;
            }
            else {
                play = 100 << 16 | 0x90 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x80 | pitchForBlack[i] << 8 | 1;
                midimsg(handle, play);
                Sleep(10);
                play = 100 << 16 | 0x90 | (pitchForBlack[i] + 4) << 8 | 2;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x80 | (pitchForBlack[i] + 4) << 8 | 2;
                midimsg(handle, play);
                Sleep(10);
                play = 100 << 16 | 0x90 | (pitchForBlack[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(150);
                play = 100 << 16 | 0x80 | (pitchForBlack[i] + 7) << 8 | 3;
                midimsg(handle, play);
                Sleep(10);
            }
        }
    }
    void changeTimbre(int i) {//ÒôÉ«ÇÐ»»²Ûº¯Êý
        longTimbreJudge = false;
        for (int j = 1; j <= 75; j++) {
            if (i == longTimbre[j]) {
                longTimbreJudge = true;
                break;
            }
        }
        change = i << 8 | 0xc0 | 1;
        midimsg(handle, change);
        change = i << 8 | 0xc0 | 2;
        midimsg(handle, change);
        change = i << 8 | 0xc0 | 3;
        midimsg(handle, change);
    }
    void changeMode(int i) {//Ä£Ê½ÇÐ»»²Ûº¯Êý
        mode[i] = true;
        mode[modebefore] = false;
        modebefore = i;
    }
    void changePitchA() {//µ÷Ê½ÇÐ»»²Ûº¯Êý
        pitchJudge = false;
    }
    void changePitcha() {//µ÷Ê½ÇÐ»»²Ûº¯Êý
        pitchJudge = true;
    }
public:
    MIDIWithGui(QWidget *parent = nullptr);
    ~MIDIWithGui();

private:
    Ui::MIDIWithGuiClass ui;
};
