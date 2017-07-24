//
// Created by fourthcafe on 2017-07-17.
//

#include <iostream>

int main() {
	char name[100];
	char lang[200];

	std::cout << "What's your name? ";
	std::cin >> name;

	std::cout << "What's your favorite Programming language? ";
	std::cin >> lang;

	std::cout << "My name is " << name << std::endl;
	std::cout << "My favorite language is " << lang;
}