//
// Created by fourthcafe on 2017-08-17.
//

// 함수는 참조자를 리턴했으나 함수를 리턴 받은 변수가 일반변수다.
// 참조형으로 반환이 되지만, 일반변수를 선언해서 반환 값을 저장했다. 결국 num1과 num2는 별개의 변수가 되었다.

#include <iostream>

using namespace std;

int &RefRetFuncOne(int &ref) {
	ref++;
	return ref;
}

int main() {
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);

	num1 += 1;
	num2 += 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
}