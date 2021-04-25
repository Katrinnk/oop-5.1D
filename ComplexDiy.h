#pragma once
#include "Complex.h"
class ComplexDiy :public Complex
{
public:
	ComplexDiy();
	ComplexDiy(double, double, double, double);
	ComplexDiy(const ComplexDiy&);

	void Sub();
	void Div();
	void Conj1();
	void Conj2();
};
