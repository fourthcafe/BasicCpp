//
// Created by fourthcafe on 2017-08-17.
//

// 두 개의 주소 값을 받아서 그 주소 값이 참조하는 영역에 저장된 값을 직접 변경하고 있다.

#include <iostream>

using namespace std;

void SwapByRef(int *ptr1, int *ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() {
	int num1 = 12;
	int num2 = 15;

	SwapByRef(&num1, &num2);

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}
