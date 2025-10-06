#pragma once

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <mutex>
#include <cstdio>
#include <string.h>
#include <Windows.h>
#include <mmsystem.h>
#include <mmeapi.h>
//一些头文件

#pragma comment (lib,"winmm.lib")

#define Get GetAsyncKeyState
#define midimsg midiOutShortMsg //把一些较长的函数简化一下
