//
// Created by fourthcafe on 2017-07-31.
//

//using 키워드는 선언 범위 내에서만 효력을 발휘한다.
//전역 범위에서 사용하는 방법
//cin, cout, endl 만으로 함수의 사용이 가능하다.

#include <iostream>

using namespace std;


int main() {
	int num = 20;
	cout << "Hello world!" << endl;
	cout << "Hello " << "world" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}