#include "MIDIWithGui.h"
#include <QtWidgets/QApplication>
#include <thread>

HMIDIOUT handle;
DWORD play = 100 << 16 | 0x90 | 0 << 8 | 1;
DWORD change;
bool judge = false;
bool pitchJudge = false;
int midikey[10] = { 0,'C','D','E','F','G','A','B' };
int freekey[256];
int pitch[60] = { 0,48,50,52,53,55,57,59,60,62,64,65,67,69,71,72,74,76,77,79,81,83,84,86,88,89,91,93,95 };
int otherPitch[60] = { 0,48,50,51,53,55,56,58,60,62,63,65,67,68,70,72,74,75,77,79,80,82,84,86,87,89,91,92,94 };
int pitchForBlack[30] = { 0,49,51,54,56,58,61,63,66,68,70,73,75,78,80,82 ,85,87,90};
int pfc[20] = { 0,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74 };
bool mode[6] = { 0x00 };
int modebefore = 1;
int longTimbre[100] = {
0,16,17,18,19,20,21,22,23,29,30,33,34,40,41,42,43,44,48,49,50,51,52,53,54,56,57,58,59,60,61,62,
63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,
93,94,95,97,101,102,103,104,109,110,111,124,125,126 };

void midiwork();
int main(int argc, char *argv[])
{
    std::thread threadformidi(midiwork);
    threadformidi.detach();
    QApplication a(argc, argv);
    MIDIWithGui w;
    w.show();
    return a.exec();
    return 0;
}
