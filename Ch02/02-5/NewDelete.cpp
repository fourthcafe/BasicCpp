//
// Created by fourthcafe on 2017-08-20.
//

// C++에서의 동적할당, 해제

#include <iostream>
#include <string.h>

using namespace std;

char *MakeStrAdr(int len) {
//	char *str = (char *) malloc(sizeof(char) * len);
	char *str = new char[len];

	return str;
}


int main() {
	char *str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	// free(str);
	delete[]str;

	return 9;
}