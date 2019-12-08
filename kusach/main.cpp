#include"Header.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nShowCmd)
{
	RegisterProgram();
	IsMyProgramRegisteredForStartup(L"My_Program");

        while(1)
        trick();

	return 0;
}
