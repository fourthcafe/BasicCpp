//
// Created by fourthcafe on 2017. 10. 15..
//
#include <iostream>

int getRandom(int min, int max) {
	std::srand(std::time(0));
	int randomNum = min + std::rand() % (max - min + 1);

	return randomNum;
}


// 1에서 max 사이에서 임의의 수 구하기
int minMax(int max) {
	int result = getRandom(1, max);

	return result;
}


// min ~ max 사이에서 임의의 수 구하기
int minMax(int min, int max) {
	int result = getRandom(min, max);

	return result;
}


int main() {
	int result1 = minMax(10);
	std::cout << result1 << std::endl;

	int result2 = minMax(47, 49);
	std::cout << result2 << std::endl;
}