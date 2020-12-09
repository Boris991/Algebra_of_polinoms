#include "Monom.h"
Monom::Monom(string str, int Maxst)
{
	string war[3] = { "x","y","z" };
	int pv[3] = { 0,0,0 };
	int l;
	string per;
	for (int i = 0; i < 3; i++)
	{
		l = str.find(war[i]);
		if (l >= 0)
		{
			per = "";
			str.erase(l, 1);
			if (str[l] != '^')
			{
				pv[i] = 1;
			}
			else
			{
				str.erase(l, 1);            //убили ^
				while ((l < str.length()) && (str[l] >= '0') && (str[l] < '9'))
				{

					per += str[l];
					str.erase(l, 1);
				}
				pv[i] = stoi(per);
			}
		}
	}
	if (str == "")
	{
		koef = 1;
	}
	else
	{
		if (str.length() == 1)
		{
			if (str[0] == '-')
			{
				koef = -1;
			}
			if (str[0] == '+')
			{
				koef = 1;
			}
		}
		else
		{
			koef = stof(str);

		}
	}
	sv = (pv[0] * Maxst + pv[1]) * Maxst + pv[2];
	next = this;
}
string Monom::GetMonom(int Maxst)
{
	string str = to_string(koef);
	int l = str.find(".");
	str.erase(l + 3);
	int k = pvx(Maxst);
	if (k == 1)
	{
		str = str + "x";
	}
	else
	{
		if (k > 1)
		{
			str = str + "x^" + to_string(k);
		}
	}
	k = pvy(Maxst);
	if (k == 1)
	{
		str = str + "y";
	}
	else
	{
		if (k > 1)
		{
			str = str + "y^" + to_string(k);
		}
	}
	k = pvz(Maxst);
	if (k == 1)
	{
		str = str + "z";
	}
	else
	{
		if (k > 1)
		{
			str = str + "z^" + to_string(k);
		}
	}
	return str;
}