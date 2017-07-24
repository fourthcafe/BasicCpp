//
// Created by fourthcafe on 2017-07-23.
// SimpleFunc 함수의 문제는?
// 		>> 파라메터가 없는 simpleFunc()가 어떤 함수를 호출해야할지 알 수 없다.
//

#include <iostream>

int SimpleFunc(int a = 10) {
	return a + 1;
}

int SimpleFunc(void) {
	return 10;
}

int main(void) {
//	std::cout << SimpleFunc(2);
	std::cout << SimpleFunc(10);

	return 0;
}