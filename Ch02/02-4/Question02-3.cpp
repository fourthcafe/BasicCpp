//
// Created by fourthcafe on 2017-08-16.
//

//ptr1과 ptr2가 가리키는 대상이 서로 바뀌도록 SwapPointer 함수를 정의해 보자.

#include <iostream>

using namespace std;

void SwapPointer(int *(&ptr1), int *(&ptr2)) {
	int *temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

int main() {
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	SwapPointer(ptr1, ptr2);

	cout << "*ptr1: " << *ptr1 << endl;
	cout << "*ptr2: " << *ptr2 << endl;
}