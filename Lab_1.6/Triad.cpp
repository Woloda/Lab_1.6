#include <iostream>
#include <sstream>
#include "Triangle.h"

void Triangle::Triad::Read() {
	number a, b, c;
	std::cout << "\n\nEnter the number x: "; std::cin >> a;
	std::cout << "Enter the number y: "; std::cin >> b;
	std::cout << "Enter the number z: "; std::cin >> c;
	Init(a, b, c);
}

void Triangle::Triad::Display() {
	std::cout << "\n\nEnter the number x: " << x;
	std::cout << "\nEnter the number y: " << y;
	std::cout << "\nEnter the number z: " << z;
}

void Triangle::Triad::Init(number a, number b, number c) {
	x = a;
	y = b;
	z = c;
}

std::string Triangle::Triad::toString() {
	std::string str;
	std::stringstream sout;
	sout << "\n\ncoordinate x: " << x;
	sout << "\ncoordinate y: " << y;
	sout << "\ncoordinate z: " << z;

	return sout.str();
}

number Triangle::Triad::Addition() {
	return x + y + z;
}