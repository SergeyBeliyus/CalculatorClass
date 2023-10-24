#include <iostream>
#include <windows.h>

class Calculator {

private:

	double num1;
	double num2;

public:
	Calculator() {
		num1 = 0;
		num2 = 0;
	}

	double add() { return num1 + num2; }

	double subtract_1_2() { return num1 - num2; }

	double subtract_2_1() { return num2 - num1; }

	double multiply() { return num1 * num2; }

	double divide_1_2() { return num1 / num2; }

	double divide_2_1() { return num2 / num1; }

	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1 = num1;
			return true;
		}
		return false;
	}
	
	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2 = num2;
			return true;
		}
		return false;
	}
};

int main() {
	double num1;
	double num2;
	Calculator Calc;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true) {
		std::cout << "Введите num1: ";
		std::cin >> num1;
		if (!Calc.set_num1(num1)) {
			std::cout << "Неверный ввод!" << std::endl;
		} else {
			std::cout << "Введите num2: ";
			std::cin >> num2;
			if (!Calc.set_num2(num2)) {
				std::cout << "Неверный ввод!" << std::endl;
			} else {
				std::cout << "num1 + num2 = " << Calc.add() << std::endl;
				std::cout << "num1 - num2 = " << Calc.subtract_1_2() << std::endl;
				std::cout << "num2 - num1 = " << Calc.subtract_2_1() << std::endl;
				std::cout << "num1 * num2 = " << Calc.multiply() << std::endl;
				std::cout << "num1 / num2 = " << Calc.divide_1_2() << std::endl;
				std::cout << "num2 / num1 = " << Calc.divide_2_1() << std::endl;
			}
		}
		
	}

}