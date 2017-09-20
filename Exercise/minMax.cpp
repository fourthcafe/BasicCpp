//
// Created by fourthcafe on 2017. 9. 17..
//
// min, max 값 지정 후 그 안에서 랜덤값 뽑기
#include <cstdlib>
#include <iostream>

int main() {
	int min = 10;
	int max = 20;

	std::srand(std::time(0));

	for (int i = 0; i < 1000; i++) {
		int randomNum = min + std::rand() % (max - min + 1);
		std::cout << randomNum << std::endl;
	}
}