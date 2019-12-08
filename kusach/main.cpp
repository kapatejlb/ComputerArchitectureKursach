#include"Header.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nShowCmd)
{
	RegisterProgram();
	IsMyProgramRegisteredForStartup(L"My_Program");
	return 0;
}
