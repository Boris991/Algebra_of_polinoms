// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "Polinom.h"
#include "locale.h"
//---------------------------------------------------------------------------

void main()
{
	setlocale(0, "");
	cout << "Введи полином " << endl;
	string st;
	cin >> st;
	Polinom a(st);
	cout << a.Getpolinom() << endl;
	Polinom b = a;
	cout << b.Getpolinom() << endl;
	Polinom c(a);
	cout << " c=a " << endl;
	cout << "c = ";

	cout << c.Getpolinom() << endl;
	cout << " c= a + b " << endl;
	c = a + b;
	cout << "c = ";
	cout << c.Getpolinom() << endl;
	cout << " c= a - b " << endl;
	c = a - b;
	cout << "c = ";
	cout << c.Getpolinom() << endl;
	cout << " c= a * b " << endl;
	c = a * b;
	cout << "c = ";
	cout << c.Getpolinom() << endl;
}
//---------------------------------------------------------------------------
