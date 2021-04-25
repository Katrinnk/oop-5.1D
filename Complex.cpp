#include "Complex.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
using namespace std;
Complex::Complex()
{
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;
}
Complex::Complex(double x1, double x2, double y1, double y2)
{
	SetRe1(x1); SetRe2(x2); SetIm1(y1); SetIm2(y2);
}
Complex::Complex(const Complex& p)
{
	x1 = p.x1;
	x2 = p.x2;
	y1 = p.y1;
	y2 = p.y2;
}
istream& operator >>(istream& in, Complex& p)
{
	cout << "vvedit re1:"; in >> p.x1;
	cout << "vvedit im1:"; in >> p.y1;
	cout << "vvedit re2:"; in >> p.x2;
	cout << "vvedit im2:"; in >> p.y2;
	if (p.x2 == 0 && p.y2 == 0)
		throw bad_exception();
	if (p.x1 == p.x2)
		throw invalid_argument("Error! - x1=x2 (pry vidnimanni otrymaemo 0 v realnii chastyni)");
	if (p.y1 == p.y2)
		throw "Error! - y1=y2 (pry vidnimanny otrymaemo 0 v mnymii chastyni)";
	if (p.y1 == 0 && p.y2 == 1)
		throw BadException("Error! - y1=0 && y2=1");
	return in;
}
ostream& operator <<(ostream& out, const Complex& p)
{
	out << string(p) << endl;
	return out;
}
Complex::operator string() const
{
	stringstream sout;
	sout << "re1: " << x1 << endl;
	sout << "im1: " << y1 << endl;
	sout << "re2: " << x2 << endl;
	sout << "im2: " << y2 << endl;
	return sout.str();
}