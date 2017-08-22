//
// Created by fourthcafe on 2017. 8. 22..
//

//Simple이라는 자료형의 변수를 하나 할당하는 문장인데 실행결과가 다르다.
// new 와 malloc 함수의 동작방식에는 차이가 있다.

#include <iostream>

using namespace std;

class Simple {
public:
	Simple() {
		cout << "I'm simple constructor!" << endl;
	}
};

int main() {
	cout << "case 1: ";
	Simple *sp1 = new Simple;

	cout << "case 2: ";
	Simple *sp2 = (Simple *) malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);
	return 0;
}