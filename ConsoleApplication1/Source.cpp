#include "include.h"

int main()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleTitle(L"Calc");
	system("COLOR F0");
	HWND hwnd = GetConsoleWindow();
	HMENU hmenu = GetSystemMenu(hwnd, FALSE);
	EnableMenuItem(hmenu, SC_CLOSE, MF_GRAYED);
	while (true) 
	{
		system("mode 25, 10");
		system("CLS");
		ShowMenu();
	}
	return 0;
}
