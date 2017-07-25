//
// Created by fourthcafe on 2017-07-26.
//

#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void);
}

namespace BestComImpl {
	void PrettyFunc(void);
}

namespace ProgComImpl {
	void SimpleFunc(void);
}

int main(void) {
	BestComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc() {
	std::cout << "Function make by BestCom" << std::endl;
	PrettyFunc();
	ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc() {
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc() {
	std::cout << "Function make by ProgCom" << std::endl;
}