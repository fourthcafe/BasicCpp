//
// Created by fourthcafe on 2017. 7. 30..
//

#include <iostream>

int main() {
	int row = 5;

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= row - i; j++) {
			std::cout << " ";
		}

		for (int k = 1; k <= i; k++) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}