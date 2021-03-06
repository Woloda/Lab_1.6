#include <iostream>
#include "main_Triad_test.h"
void Test_metod_Triad() {     //функція для демонстрування роботи з класом "Triad"
	Triangle::Triad a;
	std::cout << "\nThe first object --- Triad: ";
	a.Read();

	std::cout << "\n\nDisplay first object --- Triad: ";
	a.Display();

	std::cout << "\n\nAdding object numbers is : " << a.Addition();

	std::cout << "\n\nletter string conversion method: ";
	std::cout << a.toString();

}