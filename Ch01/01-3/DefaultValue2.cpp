//
// Created by fourthcafe on 2017-07-22.
//

#include <iostream>

int Adder(int num1 = 1, int num2 = 2);

int main(void) {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(1, 5) << std::endl;
}

int Adder(int num1, int num2) {
	return num1 + num2;
}
