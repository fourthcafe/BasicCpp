//
// Created by fourthcafe on 2017. 8. 6..
//

#include <iostream>

int main() {
	while (true) {
		std::cout << "Input number(0: exit) : ";
		int inputNum;
		std::cin >> inputNum;

		if (inputNum == 0) {
			break;
		}

		int rootCnt = 2;
		while (rootCnt < inputNum) {
			if (inputNum % rootCnt == 0) {
				break;
			}

			rootCnt++;
		}

		if (rootCnt == inputNum) {
			std::cout << inputNum << "는 소수입니다" << std::endl;
		} else {
			std::cout << inputNum << "는 소수가 아닙니다" << std::endl;
		}
	}
}