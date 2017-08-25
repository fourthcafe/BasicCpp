//
// Created by fourthcafe on 2017. 8. 25..
//

//포인터를 선언할 때 const를 사용하는 방법
//REF. http://whitesnake.uzoo.in/31

#include <iostream>

int main() {
	// string 은 std library에 포함되어 있음
	std::string nickname = "fourthcafe";
	std::string address = "seoul";


	// 포인터가 가리키고 있는 값을 변경할 수 없도록 한다.
	const std::string *myname1 = &address;

	// 에러, 가리키는 값은 변경불가.
//	*myname1 = "faceChecker";
	// 통과, 가리키는 주소는 변경가능.
	myname1 = &nickname;


	// 포인터가 가리키고 있는 주소를 변경할 수 없도록 한다. (참조자와 유사)
	std::string *const myname2 = &address;

	// 통과, 가리키는 값은 변경가능.
	*myname2 = "푸우";
	// 에러, 가리키는 주소는 변경불가.
//	myname2 = &nickname;


	// 포인터가 가리키고 있는 주소와 값 모두 변경할 수 없도록 한다.
	const std::string *const myname = &address;

	// 에러, 가리키는 값은 변경불가.
//	*myname1 = "푸우";
	// 에러, 가리키는 주소도 변경불가.
	myname1 = &nickname;
}

