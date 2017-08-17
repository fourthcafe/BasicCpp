//
// Created by fourthcafe on 2017-08-17.
//

// 함수의 리턴 형태와 리턴 받은 변수 모두 일반변수다.
// 참조자를 반환하지만, 반환형이 기본자료형 int이기 대문에 참조자가 참조하는 변수의 값이 반환된다. (=변수에 저장된 값이 반환된다.)

#include <iostream>

using namespace std;

int RefRetFuncTwo(int &ref) {
	ref++;
	return ref;
}

int main() {
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1);

	num1 += 1;
	num2 += 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
}