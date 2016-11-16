#include "playerclass.h"
#include "gett.h"
#include "include.h"
CLocalPlayer* local_player = new CLocalPlayer();

CLocalPlayer::CLocalPlayer()
{
}
void CLocalPlayer::Sum()
{
	int number;
	cout << "¬ведите количество слагаемых: ";
	cin >> number;
	char num[255];
	
		double * s = new double[number];
		double answer = 0;
		for (int i = 0; i < number; i++)
		{
			cout << "¬ведите " << i + 1 << " слагаемое: ";
			cin >> num[i];
			s[i] = gut->deka(num[i]);
			answer += s[i];
		}
		for (int i = 0; i < number - 1; i++)
			cout << gut->hexa(s[i]) << " + ";
		cout << gut->hexa(s[number - 1]) << " = " << gut->hexa(answer) << endl;
		gut->pause();
		delete[]s;

		gut->pause();

}
void CLocalPlayer::Sub()
{
	double a, b;
	char num[255];
	cout << "¬ведите уменьшаемое: ";
	cin >> num[1];
	cout << "¬ведите вычитаемое: ";
	cin >> num[2];
	a = gut->deka(num[1]);
	b = gut->deka(num[2]);
	cout << gut->hexa(a) << " - " << gut->hexa(b) << " = " << gut->hexa(a - b) << endl;
	gut->pause();
}
void CLocalPlayer::Mul()
{
	int number;
	char num[255];
	cout << "¬ведите количество множителей: ";
	cin >> number;
	
	double * s = new double[number];
	double answer = 1;
	for (int i = 0; i < number; i++)
	{
		cout << "¬ведите " << i + 1 << " множитель: ";
		cin >> num[i];
		s[i] = gut->deka(num[i]);
		answer *= s[i];
	}
	for (int i = 0; i < number - 1; i++)
		cout << gut->hexa(s[i]) << " * ";
	cout << gut->hexa(s[number - 1]) << " = " << gut->hexa(answer) << endl;
	delete[]s;
	gut->pause();
	
}
void CLocalPlayer::Div()
{
	char num[255];
	double a, b;
	cout << "¬ведите делимое: ";
	cin >> num[1];
	cout << "¬ведите делитель: ";
	cin >> num[2];
	a = gut->deka(num[1]);
	b = gut->deka(num[2]);
	cout << gut->hexa(a) << " / " << gut->hexa(b) << " = " << gut->hexa(a / b) << endl;
	gut->pause();
}
void CLocalPlayer::Sqrt()
{
	char num[255];
	double a;
	cout << "¬ведите число, из которого надо извлечь квадратный корень: ";
	cin >> num[1];
	a = gut->deka(num[1]);
	cout << "sqrt(" << gut->hexa(a) << ") = " << gut->hexa(sqrt(a)) << endl;
	gut->pause();
}
void CLocalPlayer::Radical()
{
	char num[255];
	double a, b;
	cout << "¬ведите число, из которого надо извлечь корень: ";
	cin >> num[1];
	cout << " орень какой степени надо извлечь? ";
	cin >> num[2];
	a = gut->deka(num[1]);
	b = gut->deka(num[2]);
	cout << " орень " << gut->hexa(b) << " степени из числа " << gut->hexa(a) << " равен " << gut->hexa(pow(a, 1 / b)) << endl;
	gut->pause();
}
void CLocalPlayer::Power()
{
	char num[255];
	double a, b;
	cout << "¬ведите основание степпени: ";
	cin >> num[1];
	cout << "¬ведите показатель степпени: ";
	cin >> num[2];
	a = gut->deka(num[1]);
	b = gut->deka(num[2]);
	cout << gut->hexa(a) << "^" << gut->hexa(b) << " = " << gut->hexa(pow(a, b)) << endl;
	gut->pause();
}