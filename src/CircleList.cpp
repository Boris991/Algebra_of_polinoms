#include "CircleList.h"


string CircleList::Getpolinom(int Maxst)
{
	string str = "";
	Monom* cur = first->GetNext();
	while (cur != first)
	{
		string m = cur->GetMonom(Maxst);
		if (m[0] == '-')
		{
			str = str + " " + m;

		}
		else
		{
			str = str + " + " + m;
		}

		cur = cur->GetNext();
	}
	if (str == "")
	{
		str = "0";
	}
	return str;
}
