#include"Header.h"
#include <stdio.h>
#include <dos.h>
#include <Windows.h>


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nShowCmd)
{
	bool flag;
	flag = IsMyProgramRegisteredForStartup(L"My_Program");

	if (flag == FALSE)
		//RegisterProgram(); 

	return 0;
}
