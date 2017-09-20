//
// Created by fourthcafe on 2017. 9. 17..
//

#include <cstdlib>
#include <iostream>

int main() {
	std::srand(std::time(0)); // use current time as seed for random generator
	int randomNum = std::rand() % 100 + 1;

	int min = 1;
	int max = 100;

	while (true) {
		std::cout << "숫자를 입력하세요 [" << "최소 : " << min << "최대 : " << max << "] : ";
		int inputNum = 0;
		std::cin >> inputNum;

		if (inputNum < randomNum) {
			std::cout << inputNum << " 은 " << randomNum << " 보다 작습니다" << std::endl;

		} else if (inputNum > randomNum) {
			std::cout << inputNum << " 은 " << randomNum << " 보다 큽니다" << std::endl;

		} else {
			std::cout << "Conguraturation!!" << std::endl;
			break;
		}
	}

}