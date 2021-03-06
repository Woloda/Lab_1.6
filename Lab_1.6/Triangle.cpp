#include <iostream>
#include "Triangle.h"

void Triangle::Read() {
	Triad a;
	do {
		std::cout << "\n\nEnter the side: ";
		a.Read();
	} while (!Init(a));
}

void Triangle::Display() {
	std::cout << "\n\nSide: ";
	side.Display();
}

bool Triangle::Init(Triad value) {
	double a, b, c;
	a = value.Get_x();
	b = value.Get_y();
	c = value.Get_z();

	if ((c < (a + b)) && (a < (c + b)) && (b < (a + c))) {
		side = value;
		return true;
	}
	std::cout << "\n\nIncorrectly entered data!!!";
	return false;
}

std::string Triangle::toString() { return side.toString(); }

double Triangle::Calcul_Square() {
	double a, b, c;
	a = side.Get_x();
	b = side.Get_y();
	c = side.Get_z();

	double half_p;
	half_p = (a + b + c) / 2;
	return sqrt(half_p * (half_p - a) * (half_p - b) * (half_p - c));
}

void Triangle::Calcul_Angles(angle& alpha, angle& beta, angle& sigma, double square) {
	double a, b, c;
	a = side.Get_x();
	b = side.Get_y();
	c = side.Get_z();

	alpha = asin((2.0 * square) / (b * c));
	beta = asin((2.0 * square) / (a * c));
	sigma = asin((2.0 * square) / (a * b));
}