//
// Created by fourthcafe on 2017-07-18.
//

#include <iostream>

// 숫자를 하나 입력 받아 그 숫자에 해당하는 구구단 출력
int main() {
	int inputNum;
	std::cout << "input num : ";
	std::cin >> inputNum;

	for (int i = 1; i < 10; i++) {
		std::cout << inputNum << " * " << i << " = " << inputNum * i << std::endl;
	}
}