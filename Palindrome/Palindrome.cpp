// Palindrome

#include <iostream>
#include <locale.h>
#include "windows.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "---Программа для определения числового палиндрома!---" << endl;
	int Number, Temp, Change, Flips = 0;
	do 
	{
	cout << "\nВведите Ваше число: ";
	cin >> Number;
	system("cls");
	cout << "\nПрограмма проверяет число..." << endl;
	Sleep(500);
	system("cls");
	cout << "\nЕще немного магии..." << endl;
	Sleep(500);
	system("cls");
	
		if (Number < 1 || Number<10)
	{
		cout << "\nСлишком маленькое число! \n" << endl;
		Sleep(700);
		system("cls");
	}
	} while (Number < 1 || Number < 10);
	{
		for (Temp = Number; Temp > 0; Temp = Temp / 10)
		{
			Change = Temp % 10;
			Flips = Flips * 10 + Change;
		}
		if (Number== Flips) cout <<Number<< endl<< "\nУ Вас палиндром! \n" << endl;
		else cout << Number << endl << "\n""Это не палиндром!\n" << endl;
	}
}

