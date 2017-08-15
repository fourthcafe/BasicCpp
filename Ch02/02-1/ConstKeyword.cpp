//
// Created by fourthcafe on 2017-08-15.
//

//#### 02-1 키워드 `const`를 사용하는 다음 문장들을 의미를 설명하라.
//`const int num = 10;`
//* 변수 num을 상수화한다.
//
//`const int * prt1 = &val1;`
//* 포인터 ptr1을 이용해서 val1의 값을 변경할 수 없음.
//
//`int * const ptr2 = &val2;`
//* 포인터 ptr2가 상수화 됨.
//
//`const int * const ptr3 = &val3;`
//* 포인터 ptr3가 상수화 되었으며, ptr3를 이용해서 val3의 값을 변경할 수 없음.

// ref1. http://tapito.tistory.com/31
// ref2. http://hashcode.co.kr/questions/83/const-int-const-int-const-int-const-%EA%B0%84%EC%9D%98-%EC%B0%A8%EC%9D%B4%EB%8A%94-%EB%AD%94%EA%B0%80%EC%9A%94
#include <iostream>

int main() {
	const int num = 99;
//	num = 11;
//	상수화된 변수는 변경이 불가능하다.


	int val1 = 10;
	const int *ptr1 = &val1;

	std::cout << "ptr1 : " << *ptr1 << std::endl;
//	*ptr1 = &num;		// 변경불가
	val1 = num;
	std::cout << "ptr1 : " << *ptr1 << std::endl;
//	*ptr1 = &num;	// 변경불가


	int val2 = 10;
	int *const ptr2 = &val2;
	std::cout << "ptr2 : " << *ptr2 << std::endl;
	val2 = num;
	std::cout << "ptr2 : " << *ptr2 << std::endl;
//	*ptr2 = &num;	// 변경불가


	int val3 = 10;
	const int *const ptr3 = &val3;
}