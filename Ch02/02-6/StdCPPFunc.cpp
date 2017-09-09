//
// Created by fourthcafe on 2017-09-09.
//

// C++에서 C언어의 표준 함수 호출하기
// 헤더파일의 확장자인 .h를 생략하고 앞에 c를 붙이면 C언어에 대응하는 C++의 헤더파일 이름이 된다.

#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));

	return 0;
}