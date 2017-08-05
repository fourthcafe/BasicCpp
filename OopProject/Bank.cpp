//
// Created by fourthcafe on 2017. 8. 2..
//

#include <iostream>
#include <cstring>
#include "Bank.h"

using namespace std;
using namespace Bank;
const int NAME_LEN = 20;

typedef struct {
	int accId;                    // 계좌번호
	int balance;                // 잔액
	char customerName[NAME_LEN];        // 고객이름
} Account;

Account accountList[100];
int accountIdx = 0;


void Bank::showMenu() {
	cout << "----Menu----" << endl;
	cout << "1. Create Account" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Print All Account Info" << endl;
	cout << "5. Program exit" << endl;
}

void Bank::run(Bank::BANK_COMMAND BANK_COMMAND) {
	switch (BANK_COMMAND) {
		case MAKE :
			makeAccount();
			break;
		case DEPOSIT :
			deposit();
			break;
		case WITHDRAW :
			withdraw();
			break;
		case SHOW_ALL_ACC_INFO :
			showAllAccInfo();
			break;
		case EXIT :
			initAccount();
			break;
		default:
			cout << "***Invalid input. Back to begin... ***" << endl << endl;
			break;
	}
}

void Bank::makeAccount() {
	cout << "[Deposit]" << endl;

	cout << "Input Account ID : ";
	int inputAccountId;
	cin >> inputAccountId;

	cout << "Name : ";
	char inputName[100];
	cin >> inputName;

	cout << "Deposit amount : ";
	int inputBalance;
	cin >> inputBalance;

	cout << "***Complete Deposit***" << endl << endl;

	accountList[accountIdx].accId = inputAccountId;
	strcpy(accountList[accountIdx].customerName, inputName);
	accountList[accountIdx].balance = inputBalance;

	accountIdx++;
}

void Bank::deposit() {
	// 계좌 Id를 찾아 입금한다.
	cout << "Input account Id : ";
	int inputAccountId;
	cin >> inputAccountId;

	int selectAccIdx = -1;
	for (int i = 0; i < accountIdx; i++) {
		if (accountList[i].accId == inputAccountId) {
			selectAccIdx = i;
		}
	}

	if (selectAccIdx == -1) {
		cout << "Not find account" << endl << endl;

	} else {
		cout << "Deposit amount : ";
		int inputBalance;
		cin >> inputBalance;


		cout << "***Complete Deposit***" << endl << endl;

		Account account = accountList[selectAccIdx];
		account.balance += inputBalance;

		accountList[selectAccIdx] = account;
	}
}

void Bank::withdraw() {
	cout << "***Withdraw***" << endl;

	cout << "Input account Id : ";
	int inputAccountId;
	cin >> inputAccountId;

	int selectAccIdx = -1;
	for (int i = 0; i < accountIdx; i++) {
		if (accountList[i].accId == inputAccountId) {
			selectAccIdx = i;
		}
	}

	if (selectAccIdx == -1) {
		cout << "Not find account" << endl << endl;

	} else {
		cout << "withdraw amount : ";
		int inputBalance;
		cin >> inputBalance;

		Account account = accountList[selectAccIdx];
		account.balance -= inputBalance;

		accountList[selectAccIdx] = account;

		cout << "***Complete Withdraw***" << endl << endl;
	}
}

void Bank::showAllAccInfo() {
	if (accountIdx == 0) {
		cout << "No data";

	} else {
		// sizeof(accountList)
		// 리스트만 쓰다 오랜만에 배열을 써서 size()를 구하는 법에 대한 감이 없음
		for (int i = 0; i < accountIdx; i++) {
			Account account = accountList[i];

			cout << "==========================" << endl;
			cout << "account Id : " << account.accId << endl;
			cout << "account Name : " << account.customerName << endl;
			cout << "account balance : " << account.balance << endl;
			cout << "==========================" << endl;
		}
	}

}

void Bank::initAccount() {
//	fill_n(accountList, 100, -1);
}