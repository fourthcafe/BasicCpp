//
// Created by fourthcafe on 2017-07-17.
//

#include <iostream>

// 5개의 정수를 입력 받아 그 합을 구하기
int main() {
	int num1;
	std::cout << "input 1st number : ";
	std::cin >> num1;

	int num2;
	std::cout << "input 2nd number : ";
	std::cin >> num2;

	int num3;
	std::cout << "input 3rd number : ";
	std::cin >> num3;

	int num4;
	std::cout << "input 4th number : ";
	std::cin >> num4;

	int num5;
	std::cout << "input 5th number : ";
	std::cin >> num5;

	int result = num1 + num2 + num3 + num4 + num5;
	std::cout << "result : " << result;

	return 0;
}