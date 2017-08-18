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
	} while (dividend > 0);

	std::cout << "자릿수: " << count << std::endl;
}

int main() {
	devide(39228);
}
