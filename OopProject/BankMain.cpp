//
// Created by fourthcafe on 2017. 8. 2..
//

#include <iostream>
#include "Bank.h"

using namespace Bank;

int main() {
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
			default:
				std::cout << "***Invalid input. Back to begin... ***" << std::endl << std::endl;
				break;
		}

		if (inputNum == 5) {
			std::cout << "Exit program..." << std::endl;
			break;
		}
	}
}