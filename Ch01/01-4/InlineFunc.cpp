//
// Created by fourthcafe on 2017-07-25.
//

#include <iostream>

inline int SQUARE(int x) {
	return x * x;
}

int main() {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;

	return 0;
}