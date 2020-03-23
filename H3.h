#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class shape
{
private:
	std::string name;
	double surface;

public:
	shape(string n, double s);
	void apply(vector<shape*> v, double* f(double,double));
};