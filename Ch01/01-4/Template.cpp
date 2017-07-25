//
// Created by fourthcafe on 2017-07-26.
//

#include <iostream>

// 인라인 함수는 매크로 함수를 대체하기 위해 사용하지만 자료형에 의존적이다.
// 이를 극복하기 위해서는 템플릿을 사용하면 된다.

template<typename T>
inline T SQUARE(T x) {
	return x * x;
}

int main() {
	std::cout << SQUARE(5.5) << std::endl;
	std::cout << SQUARE(12) << std::endl;

	return 0;
}