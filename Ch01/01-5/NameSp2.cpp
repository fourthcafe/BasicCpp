//
// Created by fourthcafe on 2017-07-26.
//

#include <iostream>

// 네임스페이스에서 함수의 선언과 정의를 분리

namespace BestComImpl {
	void SimpleFunc(void);
}

namespace ProgComImpl {
	void SimpleFunc(void);
}

int main(void) {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}

void BestComImpl::SimpleFunc() {
	std::cout << "Function make by BestCom" << std::endl;
}

void ProgComImpl::SimpleFunc() {
	std::cout << "Function make by ProgCom" << std::endl;
}
