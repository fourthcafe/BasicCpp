//
// Created by fourthcafe on 2017-08-16.
//

// 참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하여라
// 1. 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
// 2. 인자로 전달된 int형 변수의 부호를 바꾸는 함수
#include <iostream>

using namespace std;

void swap(int &val1, int &val2) {
	val1++;
	val2++;
}

void conversion(int &val1, int &val2) {
	val1 *= -1;
	val2 *= -1;
}


int main() {
	int val1 = 10;
	int val2 = 15;

	swap(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;


	int val3 = 17;
	int val4 = -14;

	conversion(val3, val4);
	cout << "val3: " << val3 << endl;
	cout << "val4: " << val4 << endl;

	return 0;
}