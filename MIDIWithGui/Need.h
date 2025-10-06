#pragma once

#include "MIDI.h"


extern HMIDIOUT handle;
extern DWORD play ;
extern DWORD change;
extern bool judge ;
extern bool pitchJudge;
extern int midikey[10];
extern int freekey[256];
extern int pitch[60];
extern int otherPitch[60];
extern int pitchForBlack[30];
extern int pfc[20] ;
extern bool mode[6] ;
extern int modebefore ;
extern int longTimbre[100];
extern bool longTimbreJudge;
extern int r;
