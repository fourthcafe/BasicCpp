//
// Created by fourthcafe on 2017-07-28.
//

// 네임스페이스 중첩

#include <iostream>

namespace Parent {
	int num = 2;

	namespace SubOne {
		int num = 3;
	}

	namespace SubTwo {
		int num = 4;
	}
}

int main() {
	std::cout << Parent::num << std::endl;
	std::cout << Parent::SubOne::num << std::endl;
	std::cout << Parent::SubTwo::num << std::endl;
}