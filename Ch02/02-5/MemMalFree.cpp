//
// Created by fourthcafe on 2017-08-20.
//

// C언어에서의 동적할당 방식
// 길이정보를 인자로 받아서, 해당 길이의 문자열 저장이 가능한 배열을 생성하고, 그 배열의 주소 값을 반환
// 1. 할당할 대상의 정보를 무조건 바이트 크기 단위로 전달해야 한다.
// 2. 반환형이 void형 포인터이기 때문에 적절한 형 변환을 거쳐야 한다.

#include <iostream>
#include <string.h>

using namespace std;

char *makeStrAdr(int len) {
	char *str = (char *) malloc(sizeof(char) * len);
	return str;
}

int main() {
	char *str = makeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);

	return 0;
}