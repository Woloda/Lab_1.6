#include <iostream>
#include <iomanip>
#include "Triangle.h"
#include "main_Triad_test.h"

int main(void) {          //функція для демонстрування роботи з класом "Triangle"
	Test_metod_Triad();   //функція для демонстрування роботи з класом "Triad"

	Triangle b;
	std::cout << "\nThe second object --- Triangle: ";
	b.Read();

	std::cout << "\n\nDisplay second object --- Triangle: ";
	b.Display();

	std::cout << "\n\nThe area of the triangle is: " << std::setprecision(3) << b.Calcul_Square();

	angle alpha, beta, sigma;
	std::cout << "\n\nThe angles of the triangle are: ";

	b.Calcul_Angles(alpha, beta, sigma, b.Calcul_Square());
	std::cout << "\n\nThe first angle of the triangle is: " << std::setprecision(3) << alpha;
	std::cout << "\nThe second angle of the triangle is: " << std::setprecision(3) << beta;
	std::cout << "\nThe third angle of the triangle is: " << std::setprecision(3) << sigma;

	std::cout << "\n\nletter string conversion method: ";
	std::cout << b.toString();

	return 0;
}