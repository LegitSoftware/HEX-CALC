#include "include.h"
#include "playerclass.h"
#include "gett.h"
void ShowMenu()
{
	char menu[1];
	cout << "1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление \n5. Квадратный корень\n";
	cout << "6. Корень любой степени\n7. Возведение в степень\n8. Выход\n";
	cout << endl <<"Введите код действия: ";
	cin >> menu[0];
	if (isdigit(menu[0]))
	{
	stringstream ss;
	string target;
	ss << menu[0];
	ss >> target;
	system("mode 70, 5");
	if (target == "1")
		local_player->Sum();
	else if (target == "2")
		local_player->Sub();
	else if (target == "3")
		local_player->Mul();
	else if (target == "4")
		local_player->Div();
	else if (target == "5")
		local_player->Sqrt();
	else if (target == "6")
		local_player->Radical();
	else if (target == "7")
		local_player->Power();
	else if (target == "8")
		exit(0);
	else
		gut->Error();
	system("cls");
	}
	else
	{
		gut->Error();
	}
}


