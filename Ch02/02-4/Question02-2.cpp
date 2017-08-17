//
// Created by fourthcafe on 2017-08-17.
//

// const int num = 12;
// 1. 포인터 변수를 선언해서 위 변수를 가리키게 하기
// 2. 이 포인터 변수를 참조하는 참조자를 선언하기.
// 3. 선언한 포인터 변수와 참조자를 이용해서 num에 저장된 값 출력하기

#include <iostream>

using namespace std;

int main() {
	const int num = 12;
	const int *ptr = &num;
	const int *(&ref) = ptr;

	cout << "num: " << num << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "ref: " << *ref << endl;

	return 0;
}