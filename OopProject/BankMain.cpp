//
// Created by fourthcafe on 2017. 8. 2..
//

#include <iostream>
#include "Bank.h"

using namespace Bank;

namespace Main {
	int userInput() {
		int inputNum;

		std::cout << "Choose One: ";
		std::cin >> inputNum;

		return inputNum;
	}

}

int main() {
	while (true) {
		showMenu();
		int inputNum = Main::userInput();

		auto bankCommand = static_cast<BANK_COMMAND>(inputNum);

		run(bankCommand);

		if (inputNum == 5) {
			std::cout << "Exit program..." << std::endl;
			break;
		}
	}
}