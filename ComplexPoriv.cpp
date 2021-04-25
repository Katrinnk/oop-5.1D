#include "ComplexPoriv.h"
ComplexPoriv::ComplexPoriv() :Complex(0, 0, 0, 0) {}
bool operator > (ComplexPoriv& x1, ComplexPoriv& x2)
{
	return ((x1.GetIm1() > x2.GetIm2() && x1.GetRe1() == x2.GetRe2()) || (x1.GetIm1() == x2.GetIm2() && x1.GetRe1() > x2.GetRe2()));
}
bool operator < (ComplexPoriv& a, ComplexPoriv& b)
{
	return ((a.GetIm1() < b.GetIm2() && a.GetRe1() == b.GetRe2()) || (a.GetIm1() == b.GetIm2() && a.GetRe1() < b.GetRe2()));
}
bool operator == (ComplexPoriv& a, ComplexPoriv& b)
{
	return (a.GetIm1() == b.GetIm2() && a.GetRe1() == b.GetRe2());
}
