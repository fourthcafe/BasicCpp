//
// Created by fourthcafe on 2017. 9. 24..
//

#include <iostream>

// random하게 1~3의 값을 받아온다.
// 1~3의 값을 입력한다.
// 같으면 다시
// 다르면 승패를 비교한다.
/*
1: 가위
2: 바위
3: 보
*/

int getCom() {
	int min = 0;
	int max = 2;

	std::srand(std::time(0));
	int randomNum = min + std::rand() % (max - min + 1);

	return randomNum;
}

std::string getResult(int num) {
	switch (num) {
		case 0:
			return "가위";
		case 1:
			return "바위";
		case 2:
			return "보";
		default:
			return "wrong input";
	}
}


int main() {
	while (true) {
		int com = getCom();

		std::cout << "가위(0) 바위(1) 보(2)! : ";
		int me;
		std::cin >> me;

		std::cout << "me : " << getResult(me) << ", com : " << getResult(com) << std::endl;
		if (me == com) {
			std::cout << "비겼습니다. 다시 한번!" << std::endl;
		} else if ((me + 1) % 3 == com) {
			std::cout << "졌습니다." << std::endl;
			break;
		} else {
			std::cout << "이겼습니다." << std::endl;
			break;
		}

	}
}