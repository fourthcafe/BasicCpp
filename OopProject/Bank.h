//
// Created by fourthcafe on 2017. 8. 2..
//

namespace Bank {
	enum BANK_COMMAND {
		MAKE = 1,
		DEPOSIT,
		WITHDRAW,
		SHOW_ALL_ACC_INFO,
		EXIT
	};

	void showMenu();

	// 프로그램 실행
	void run(Bank::BANK_COMMAND BANK_COMMAND);

	// 계좌개설
	void makeAccount();

	// 입금
	void deposit();

	// 인출
	void withdraw();

	// 계좌정보 전체 출력
	void showAllAccInfo();

	// 전체 계좌 초기화
	void initAccount();
}
