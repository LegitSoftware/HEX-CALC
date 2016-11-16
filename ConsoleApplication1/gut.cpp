
#include "gett.h"
#include "include.h"
getter* gut = new getter();


void getter::pause()
{
	cout << endl << "Press PageDown to continue" << endl;
	do
	{
		if (GetAsyncKeyState(0x22))
		{
			break;
		}
		Sleep(10);
	} while (TRUE);
}
void getter::Error()
{
	system("mode 20, 1");
	cout << "Error! Wrong data!";
	gut->pause();
}
string getter::hexa(int numero)
{
	stringstream stream;
	stream << "0x"
		<< hex << numero;
	return stream.str();
}
long int getter::deka(long int numas)
{
	char nums[] = { numas };
	long int ch1 = strtol(nums, NULL, 16);
	return ch1;
}