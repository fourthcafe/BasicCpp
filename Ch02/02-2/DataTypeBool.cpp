//
// Created by fourthcafe on 2017-08-12.
//

#include <iostream>

using namespace std;

// num 값이 양수면 true, 음수면 false를 리턴한다.
bool IsPositive(int num) {
	if (num <= 0) {
		return false;
	} else {
		return true;
	}
}


int main() {
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos) {
		cout << "Positive number" << endl;
	} else {
		cout << "Negative number" << endl;
	}

	return 0;
}