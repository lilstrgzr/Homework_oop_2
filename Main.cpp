#include <iostream>
#include "Fraction.hpp"



int main() {
	setlocale(LC_ALL, "Russian");

	Fraction f1(9, 7, true);
	Fraction f2(4, 9, true);


	std::cout << "Дробь f1 = ";
	f1.print();
	std::cout << std::endl;
	std::cout << "Дробь f2 = ";
	f2.print();
	std::cout << std::endl;

	Fraction sum = f1.sum(f2);
	std::cout << "Сумма f1 и f2: ";
	sum.print();
	std::cout << std::endl;

	Fraction diff = f1.subtraction(f2);
	std::cout << "Разность f1 и f2: ";
	diff.print();
	std::cout << std::endl;




	return 0;

}