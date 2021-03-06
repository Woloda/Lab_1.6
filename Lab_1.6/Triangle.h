#pragma once
#include <string>

typedef double angle, number;

class Triangle {        //клас --- трикутник
	friend void Test_metod_Triad();
private:
	class Triad {       //клас --- трійка чисел
	private:
		number x;
		number y;
		number z;
	public:
		void Set_x(number value) { x = value; }
		number Get_x()const { return x; }

		void Set_y(number value) { y = value; }
		number Get_y()const { return y; }

		void Set_z(number value) { z = value; }
		number Get_z()const { return z; }

		void Read();
		void Display();
		void Init(number, number, number);
		std::string toString();

		number Addition();     //додавання чисел
	};

	Triad side;                //трійка числе --- сторін трикутника

public:
	void Set_side(Triad value) { side = value; }
	Triad Get_side()const { return side; }

	void Read();
	void Display();
	bool Init(Triad);
	std::string toString();

	double Calcul_Square();                                  //обчислення площі
	void Calcul_Angles(angle&, angle&, angle&, double);      //обчислення кутів трикутника

	double  Unit_Test_Triad();
	void Unit_Test_Triangle();
};