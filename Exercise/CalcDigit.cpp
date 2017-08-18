//
// Created by fourthcafe on 2017. 8. 19..
//

// 주어진 숫자 자릿수 구하기

#include <iostream>

void devide(int dividend) {

	int count = 0;
	do {
		dividend /= 10;
		count++;
	} while (abs(dividend) > 0);

	std::cout << "자릿수: " << count << std::endl;
}

int main() {
	int dividend;

	do {
		std::cout << "숫자를 입력해주세요(종료=0) : ";
		std::cin >> dividend;

		devide(dividend);
	} while (dividend != 0);
}
