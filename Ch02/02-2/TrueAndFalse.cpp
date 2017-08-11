//
// Created by fourthcafe on 2017-08-11.
//

// true와 false는 '참'과 '거짓'을 표현하기 위한 1바이트 크기의 데이터이다.
// 다음과 같이 오해하지 말것 :: true와 false는 각각 1과 0을 의미하는 키워드
// 이 둘을 출력하거나 정수의 형태로 형 변환하는 경우에 각각 1과 0으로 변환하도록 정의되어 있을 뿐

#include <iostream>

using namespace std;

int main() {
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl;
	cout << "false: " << false << endl;

	while (true) {
		cout << i++ << ' ';
		if (i > num) {
			break;
		}
	}

	cout << endl;

//	실제 int형 데이터는 byte 크기가 4이고 bool형 데이터는 byte 크기가 1이다.
	cout << "sizeof 1: " << sizeof(1) << endl;
	cout << "sizeof 0: " << sizeof(0) << endl;
	cout << "sizeof true: " << sizeof(true) << endl;
	cout << "sizeof false: " << sizeof(false) << endl;

	return 0;
}