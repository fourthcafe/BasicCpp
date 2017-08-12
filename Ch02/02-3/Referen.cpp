//
// Created by fourthcafe on 2017-08-12.
//

// int &num2 = num1 ::참조자
// 참조자도 변수다. 기능과 연산의 결과가 변수와 동일하다.
// 하지만, C++에서는 참조자와 변수를 구분해서 이야기한다.
// 참조자는 변수를 대상으로만 선언이 가능하다.

#include <iostream>
using namespace std;

int main() {
	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;

	return 0;
}
