//
// Created by fourthcafe on 2017-08-14.
//

// 참조자의 수에는 제한이 없으며, 참조자를 대상으로도 참조자를 선언할 수 있다.

// 변수에 대해서만 선언이 가능하고, 선언됨과 동시에 참조해야만 한다.
// 다음 선언은 유효하지 않다.
//int &ref = 20;

// 참조자는 변수에 또 다른 이름을 붙이는 것이기에 상수를 대상으로 선언할 수 없다.
// 미리 참조자를 선언했다가, 후에 누군가를 참조하는 것은 불가능하며, 참조의 대상을 바꾸는 것도 불가능하다.
// 참조자를 선언하면서 NULL로 초기화하는 것은 불가능하다. (포인터 변수의 선언처럼)

#include <iostream>
using namespace std;

int main() {
	int arr[3] = {1, 3, 5};
	int &ref1 = arr[0];
	int &ref2 = arr[1];
	int &ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	return 0;
}