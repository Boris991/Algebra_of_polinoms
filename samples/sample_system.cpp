// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "Polinom.h"
#include "Monom.h"
#include "locale.h"
//---------------------------------------------------------------------------

void main()
{
	setlocale(0, "");
	cout << "����� ������� " << endl;
	string st;
	cin >> st;
	Polinom a(st);
	cout << "� = ";
	cout << a.Getpolinom() << endl;
	Polinom b = a;
	cout << "b = a = "<< b.Getpolinom() << endl;
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
	int x;
	cout << "������� x "<< endl;
	cin >> x;
	int y;
	cout << "������� y " << endl;
	cin >> y;
	int z;
	cout << "������� z " << endl;
	cin >> z;
	cout << c.GetResult(x,y,z) << endl;
}
//---------------------------------------------------------------------------
