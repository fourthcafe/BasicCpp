//
// Created by fourthcafe on 2017-07-17.
//

#include <iostream>

//이름과 전화번호를 입력 받아 입력 받은 데이터를 그대로 출력하기 프로그램
int main() {
	char name[100];
	std::cout << "input name : ";
	std::cin >> name;

	char telNum[100];
	std::cout << "input telNum : ";
	std::cin >> telNum;

	std::cout << "name : " << name << std::endl;
	std::cout << "telNum : " << telNum << std::endl;

	return 0;
}