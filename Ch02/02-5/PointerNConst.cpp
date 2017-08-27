//
// Created by fourthcafe on 2017. 8. 25..
//

//포인터를 선언할 때 const를 사용하는 방법
//REF. http://whitesnake.uzoo.in/31

// 결론
/*
*const 구문이 있으면 포인터의 주소값이 고정된다.
 그 외에는 값이 고정된다.
 const 구문의 위치는 중요하지 않다. 아래 두 선언은 string 변수를 고정값으로 한다는 의미에서 동일하다.
 	const string constString = "고정값1";
 	string const stringConst = "고정값2";
*/

#include <iostream>

int main() {
	// string 은 std library에 포함되어 있음
	std::string nickName = "fourthcafe";
	std::string address = "seoul";


	// 포인터가 가리키고 있는 값 고정
	const std::string *constStringPointer = &nickName;
	// 에러! 가리키는 값 변경 불가
//	*constStringPointer = "faceChecker";
	// 가리키는 주소 변경가능.
	constStringPointer = &address;


	// 포인터가 가리키고 있는 값 고정 (위와 동일)
	std::string const *stringConstPointer = &nickName;
	// 에러! 가리키는 값은 변경 불가
//	*stringConstPointer = "faceChecker";
	// 가리키는 주소 변경 가능
	stringConstPointer = &address;


	// 포인터가 가리키고 있는 주소값 고정 (참조자와 유사)
	std::string *const stringPointerConst = &nickName;
	// 가리키는 값 변경 가능
	*stringPointerConst = "faceChecker";
	// 에러! 가리키는 주소는 변경불가
//	stringPointerConst = &address;


	// 포인터가 가리키고 있는 주소와 값 모두 고정
	const std::string *const constStringPointerConst = &nickName;
	// 에러! 가리키는 값 변경 불가
//	*constStringPointerConst = "faceChecker";
	// 에러! 가리키는 주소 변경 불가
//	constStringPointerConst = &nickname;


	// 포인터가 가리키고 있는 값 고정
	const std::string const *constStringConstPointer = &nickName;
	// 에러! 가리키는 값 변경 불가
//	*constStringConstPointer = "faceChecker";
	// 가리키는 주소 변경 가능
	constStringConstPointer = &address;
}

