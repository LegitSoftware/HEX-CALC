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
	cout << "������� ���������� ���������: ";
	cin >> number;
	char num[255];
	
		double * s = new double[number];
		double answer = 0;
		for (int i = 0; i < number; i++)
		{
			cout << "������� " << i + 1 << " ���������: ";
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
	cout << "������� �����������: ";
	cin >> num[1];
	cout << "������� ����������: ";
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
	cout << "������� ���������� ����������: ";
	cin >> number;
	
	double * s = new double[number];
	double answer = 1;
	for (int i = 0; i < number; i++)
	{
		cout << "������� " << i + 1 << " ���������: ";
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
	cout << "������� �������: ";
	cin >> num[1];
	cout << "������� ��������: ";
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
	cout << "������� �����, �� �������� ���� ������� ���������� ������: ";
	cin >> num[1];
	a = gut->deka(num[1]);
	cout << "sqrt(" << gut->hexa(a) << ") = " << gut->hexa(sqrt(a)) << endl;
	gut->pause();
}
void CLocalPlayer::Radical()
{
	char num[255];
	double a, b;
	cout << "������� �����, �� �������� ���� ������� ������: ";
	cin >> num[1];
	cout << "������ ����� ������� ���� �������? ";
	cin >> num[2];
	a = gut->deka(num[1]);
	b = gut->deka(num[2]);
	cout << "������ " << gut->hexa(b) << " ������� �� ����� " << gut->hexa(a) << " ����� " << gut->hexa(pow(a, 1 / b)) << endl;
	gut->pause();
}
void CLocalPlayer::Power()
{
	char num[255];
	double a, b;
	cout << "������� ��������� ��������: ";
	cin >> num[1];
	cout << "������� ���������� ��������: ";
	cin >> num[2];
	a = gut->deka(num[1]);
	b = gut->deka(num[2]);
	cout << gut->hexa(a) << "^" << gut->hexa(b) << " = " << gut->hexa(pow(a, b)) << endl;
	gut->pause();
}