#pragma once
#include "Complex.h"
#pragma once
class ComplexPoriv :public Complex
{
public:
	ComplexPoriv();

	friend bool operator > (ComplexPoriv&, ComplexPoriv&);
	friend bool operator < (ComplexPoriv&, ComplexPoriv&);
	friend bool operator == (ComplexPoriv&, ComplexPoriv&);

};

