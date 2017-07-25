//
// Created by fourthcafe on 2017-07-26.
//

// 네임스페이스 지정. 같은 이름의 함수를 공간을 나누어 사용할 수 있게 한다.
// 연산자 :: 을 가리켜 범위지정 연산자라 한다.

#include <iostream>

namespace BestComImpl {
	void SimpleFunc() {
		std::cout << "Function make by BestCom" << std::endl;
	}
}

namespace ProgComImpl {
	void SimpleFunc() {
		std::cout << "Function make by ProgCom" << std::endl;
	}
}

int main() {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}
