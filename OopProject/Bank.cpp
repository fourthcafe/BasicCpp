//
// Created by fourthcafe on 2017. 8. 2..
//

#include <iostream>
#include <cstring>
#include "Bank.h"

using namespace std;
const int NAME_LEN = 20;

enum {
	MAKE = 1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT
};

typedef struct {
	int accId;                    // 계좌번호
	int balance;                // 잔액
	char customerName[20];        // 고객이름
} Account;

Account accArr[100];
const int accountIdx = 0;


void Bank::showMenu() {
	std::cout << "----Menu----" << std::endl;
	std::cout << "1. Create Account" << std::endl;
	std::cout << "2. Deposit" << std::endl;
	std::cout << "3. Withdraw" << std::endl;
	std::cout << "4. Print All Account Info" << std::endl;
	std::cout << "5. Program exit" << std::endl;
}

int Bank::userInput() {
	int inputNum;

	std::cout << "Choose One: ";
	std::cin >> inputNum;

	return inputNum;
}

void Bank::makeAccount() {
	std::cout << "[Deposit]" << std::endl;

	int accountId;
	char name[100];
	int balance;

	std::cout << "Input Account ID : ";
	std::cin >> accountId;

	std::cout << "Name : ";
	std::cin >> name;

	std::cout << "Deposit amount : ";
	std::cin >> balance;

	std::cout << "***Complete Deposit***" << std::endl << std::endl;

	accArr[accountIdx].accId = accountId;
	strcpy(accArr[accountIdx].customerName, name);
	accArr[accountIdx].balance = balance;

	accountId++;
}

void Bank::deposit() {

}

void Bank::withdraw() {

}

void Bank::showAllAccInfo() {

}