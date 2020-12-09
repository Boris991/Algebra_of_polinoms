#include "string"
using namespace std;
class Monom
{
private:
	float koef;
	int sv;
	Monom* next;
public:
	Monom(float koef_ = 0, int sv_ = -1)
	{
		koef = koef_;
		sv = sv_;
		next = this;
	}
	Monom(string str, int Maxst = 10);
	
	~Monom()
	{
		next = nullptr;
	}
	Monom* GetNext()
	{
		return next;
	}
	void SetNext(Monom* tmp)
	{
		next = tmp;
	}
	Monom(const Monom& tmp)
	{
		koef = tmp.koef;
		sv = tmp.sv;
		next = this;
	}
	Monom& operator=(const Monom& tmp)
	{
		koef = tmp.koef;
		sv = tmp.sv;
		return *this;//!!!!!
	}
	float Getkoef()
	{
		return koef;
	}
	void Setkoef(float tmp)
	{
		koef = tmp;
	}
	int Getsv()
	{
		return sv;
	}
	int pvx(int Maxst)
	{
		if (sv < 0)
		{
			throw "can not put value degree of x";
		}
		return sv / (Maxst * Maxst);
	}
	int pvy(int Maxst)
	{
		if (sv < 0)
		{
			throw "can not put value degree of y";
		}
		return (sv / Maxst) % Maxst;
	}
	int pvz(int Maxst)
	{
		if (sv < 0)
		{
			throw "can not put value degree of z";
		}
		return sv  % Maxst;
	}
	Monom multiply(Monom& tmp, int Maxst = 10)
	{
		int kx, ky, kz;
		kx = pvx(Maxst) + tmp.pvx(Maxst);
		ky = pvy(Maxst) + tmp.pvy(Maxst);
		kz = pvz(Maxst) + tmp.pvz(Maxst);
		Monom newsv;
		if ((kx < Maxst) && (ky < Maxst) && (kz < Maxst))
		{
			newsv.sv = (kx * Maxst + ky) * Maxst + kz;
			string str = to_string(koef * tmp.koef);
			int l = str.find(".");
			str.erase(l + 3);
			newsv.koef = stof(str);
		}
		return newsv;
	}

	string GetMonom(int Maxst = 10);
};
