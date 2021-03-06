#include "Triangle.h"

double Triangle::Unit_Test_Triad() {
	Triad a;
	a.Init(5, 7, 8);

	return a.Addition();
}

void Triangle::Unit_Test_Triangle() {
	Triad b;
	b.Init(5, 5, 6);
	Set_side(b);
}