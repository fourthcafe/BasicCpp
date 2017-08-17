//
// Created by fourthcafe on 2017-08-17.
//

// 참조자를 리턴 받은 변수도 참조자다. 모두 같은 변수를 참조한다.

#include <iostream>

using namespace std;

int &RefRetFuncOne(int &ref) {
	ref++;
	return ref;
}

int main() {
	int num1 = 1;
	int &num2 = RefRetFuncOne(num1);

	num1++;
	num2++;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
}
