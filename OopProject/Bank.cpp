//
// Created by fourthcafe on 2017. 8. 2..
//

#include <iostream>
#include "Bank.h"

void Bank::runBankProgram() {

	while (true) {
		showInfo();
		int inputNum = userInput();

		if (inputNum == 5) {
			break;
		}
	}


}

void Bank::showInfo() {
	std::cout << "----Menu----" << std::endl;
	std::cout << "1. 계좌개설" << std::endl;
	std::cout << "2. 입금" << std::endl;
	std::cout << "3. 출금" << std::endl;
	std::cout << "4. 계좌정보 전체 출력" << std::endl;
	std::cout << "5. 프로그램 종료" << std::endl;
}

int Bank::userInput() {
	int inputNum;

	std::cout << "선택: ";
	std::cin >> inputNum;

	return inputNum;
}