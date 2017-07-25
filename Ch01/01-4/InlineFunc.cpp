//
// Created by fourthcafe on 2017-07-25.
//

#include <iostream>

// 인라인 함수와 일반 함수의 가장 큰 차이점은 함수의 호출방식으로
// 인라인 함수는 컴파일된 함수 코드가 프로그램의 코드 안에 직접 삽입된다.
// 컴파일러가 함수를 호출하는 대신, 그에 대응하는 함수 코드로 대체한다는 것으로 성능이 향상될 수 있다.
// 단, 함수 코드의 수행 시간이 짧고 빈번하게 호출되는 함수가 아니라면 절대적인 시간 절약은 그다지 크지 않다.
// 메모리 사용 측면에서는 일반 함수보다 불리하다. (호출 장소에 함수의 사본을 복사하는 방식이기 때문)
inline int SQUARE(int x) {
	return x * x;
}

int main() {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;

	return 0;
}