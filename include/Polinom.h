#include "CircleList.h"
#include "Monom.h"
#include "string"
using namespace std;
class Polinom
{
private:
    CircleList sp;
    int Maxst;
public:
    Polinom(string str = "", int Maxst_ = 10)
    {

        Maxst = Maxst_;
        if (str != "")
        {
            int k;
            string* w;
            w = new string[str.length() + 2];
            StringToWord(str, w, k);
            for (int i = 0; i < k; i++)
            {
                string s = w[i];
                sp.AddMonom(s);
            }
        }
    }
    ~Polinom() {};
    Polinom(const Polinom& tmp)
    {
        sp = tmp.sp;
        Maxst = tmp.Maxst;
    }
    Polinom& operator=(Polinom tmp)
    {
        sp = tmp.sp;
        Maxst = tmp.Maxst;
        return *this;
    }
    Polinom operator+(Polinom tmp)
    {
        Polinom res;
        if (Maxst == tmp.Maxst)
        {
            res.sp = sp + tmp.sp;
        }
        return res;
    }
    Polinom operator-(Polinom tmp)
    {
        Polinom res;
        if (Maxst == tmp.Maxst)
        {
            res.sp = sp - tmp.sp;
        }
        return res;
    }
    Polinom operator*(Polinom tmp)
    {
        Polinom res;
        if (Maxst == tmp.Maxst)
        {
            res.sp = sp.multiply(tmp.sp, Maxst);
        }
        return res;
    }
    string Getpolinom()
    {
        return sp.Getpolinom(Maxst);
    }
    void StringToWord(string str, string* w, int& k);
};