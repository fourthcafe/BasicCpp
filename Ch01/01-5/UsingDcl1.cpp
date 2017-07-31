//
// Created by fourthcafe on 2017-07-31.
//

// 키워드 using을 이용하여 '이름 공간 Hybrid에 정의된 HybFunc를 호출할 때에는 이름 공간을 지정하지 않고 호출하겠다!는 것을 명시

#include <iostream>

namespace Hybrid {
	void HybFunc() {
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main() {
//	using Hybrid::HybFunc	HybFunc를 이름공간 Hybrid에서 찾으라. HybFunc은 함수의 이름도, 변수의 이름도 될 수 있다.
//	using 키워드는 선언 범위 내에서만 효력을 발휘한다. 이 경우에는 main함수 내에서만 사용이 가능하며 그 범위 밖에서는 사용이 불가능하다.
	using Hybrid::HybFunc;
	HybFunc();

	return 0;
}