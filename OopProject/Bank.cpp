//
// Created by fourthcafe on 2017. 8. 2..
//

#include <iostream>
#include "Bank.h"

typedef struct {
	int addId;
	int balance;
	char customerName[20];
} Account;

Account accArr[10];
const int accIdx = 0;


void Bank::runBankProgram() {

	while (true) {
		showMenu();
		int inputNum = userInput();

		switch (inputNum) {
			case 1 :
				makeAccount();
				break;
			case 2 :
				deposit();
				break;
			case 3 :
				withdraw();
				break;
			case 4 :
				showAllAccInfo();
				break;
			case 5 :
				break;
		}
		if (inputNum == 5) {
			break;
		}
	}


}

void Bank::showMenu() {
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

void Bank::makeAccount() {
	std::cout << "[입	금]" << std::endl;

	int accountId;
	char name[100];
	int balance;

	std::cout << "계좌ID: ";
	std::cin >> accountId;

	std::cout << "이름";
	std::cin >> name;

	std::cout << "입금액";
	std::cin >> balance;

	std::cout << "입금완료";

	accArr[accIdx].addId = accountId;
	strcpy(accArr[accIdx].customerName, name);
	accArr[accIdx].balance = balance;
}

void Bank::deposit() {

}

void Bank::withdraw() {

}

void Bank::showAllAccInfo() {

}