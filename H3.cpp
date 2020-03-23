#include<iostream>
#include<string>
#include<algorithm>
#include "H3.h"

using namespace std;

shape::shape(string n, double s)
{
	//konstruktor
	name = n;
	surface = s;
}

void shape::apply(vector<shape*> v, double *f(double,double))
{
	int n,i,ff;
	n = v.size();
	std::for_each(v.begin(), v.end(), f);
	for (i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
}

template <typename S>
struct Mul
{
	S p = 1;
	void mul() (S val) { p = p * val };
};

template <typename T>
struct Div
{
	T t = 1;
	void div() (T par) { t = };
};

template <typename TT>
struct Trans
{
	TT val = 1;
	void operator() (TT par) { val = val * par };
};


int main()
{
	//Alle meine Versuche um die Funktion apply zu implementieren waren erfolglos. 
	shape a("circle",12), b("square",2), c("triangle",3), d("rectangle",4);
	vector<shape> v = { a,b,c,d };
	Mul<int> fmul;
	//apply(v, fmul(v,2));
	Div<int>fdiv;
	Trans<string>ftrans;
	return 0;
}