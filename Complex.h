#pragma once
#include <iostream>
#include <string>
#include "BadExeption.h"
using namespace std;
class Complex
{
public:
	double x1, x2, y1, y2;
public:
	double GetRe1() const { return x1; }
	double GetRe2() const { return x2; }
	double GetIm1() const { return y1; }
	double GetIm2() const { return y2; }
	void SetRe1(double value) { x1 = value; }
	void SetRe2(double value) { x2 = value; }
	void SetIm1(double value) { y1 = value; }
	void SetIm2(double value) { y2 = value; }


	Complex();
	Complex(double, double, double, double);
	Complex(const Complex&);

	operator string() const;
	friend ostream& operator <<(ostream&, const Complex&);
	friend istream& operator >>(istream&, Complex&) throw (bad_exception, invalid_argument, const char*, BadException);
};

