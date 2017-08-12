//
// Created by fourthcafe on 2017. 7. 30..
//

#include <iostream>

int main() {
	int row = 5;

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}

		std::cout<< std::endl;
	}
}