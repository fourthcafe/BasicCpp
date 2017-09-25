//
// Created by fourthcafe on 2017. 9. 24..
//

#include <iostream>

/*
가위바위보 게임

핵심 : (me + 1) % 3 == com >> 패배
	사용자가 '보'를 낸 경우 (2 + 1) % 3 = 0, 컴퓨터의 0은 '가위' >> 패배
 	승패를 정해야하는데 단순히 수가 큰 것이 이기는 게 아닌 순환 로직인 상황.
 	기본적으로 (사용자 입장에서) 수가 큰 것이 이기는 게 맞지만 max값은 min값에 지게 만들어야 한다.
 	if (me == max && com == min) {
		패배
 	} else if (me > min) {
 		승리
 	} else if (me == min) {
		무승부
 	} else {
 		패배
 	}

 	패배의 조건이 두개인데 이걸 함축할 수 있는 수식이 (me + 1) % 3 == com >> 패배.
 	나의 입장에서 1을 더했는데 컴퓨터와 같다면 패배이다.
 	그리고 'me == max && com == min 이면 패배'인 조건이 위의 수식이면 만족할 수 있다.
*/


int getCom() {
	int min = 0;
	int max = 2;

	std::srand(std::time(0));
	int randomNum = min + std::rand() % (max - min + 1);

	return randomNum;
}


int getUser() {
	int me = 0;
	do {
		std::cout << "가위(0) 바위(1) 보(2)! : ";
		std::cin >> me;

		if (me < 0 || me > 2) {
			std::cout << "잘못된 입력입니다." << std::endl;
		}
	} while (me < 0 || me > 2);

	return me;
}


std::string convertText(int num) {
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


int gameStart() {
	int com = getCom();
	int me = getUser();

	std::cout << "me : " << convertText(me) << " vs com : " << convertText(com) << std::endl;
	if (me == com) {
		std::cout << "비겼습니다. 다시 한번!" << std::endl;
		return 0;
	} else if ((me + 1) % 3 == com) {
		std::cout << "졌습니다." << std::endl;
		return 1;
	} else {
		std::cout << "이겼습니다." << std::endl;
		return 2;
	}
}


int main() {
	int result = 0;
	do {
		result = gameStart();
	} while (result == 0);
}