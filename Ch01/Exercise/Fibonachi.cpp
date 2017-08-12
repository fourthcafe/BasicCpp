//
// Created by fourthcafe on 2017. 8. 6..
//

#include <iostream>

int main() {
	std::cout << "input Fibonachi Cnt : ";
	int inputNum;
	std::cin >> inputNum;

	int firstNum = 0;
	int secondNum = 0;

	std::cout << firstNum << " " << secondNum << " ";

	for (int i = 3; i <= inputNum; i++) {
		std::cout << firstNum + secondNum << " ";

		int temp = secondNum;
		secondNum += firstNum;
		firstNum = temp;
	}
}