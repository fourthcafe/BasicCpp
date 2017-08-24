//
// Created by fourthcafe on 2017-08-24.
//

#include <iostream>

using namespace std;

int main() {
	cout << "----[Reference]----" << endl;

	string str1("str1");
	string str2("str2");

	string &ref = str1;
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "ref : " << ref << endl;

	// ref의 참조 대상을 바꾸는 게 아니라 str1의 값을 str2의 값으로 변경하게 된다.
	ref = str2;
	cout << "str1 : " << str1 << " ***str1 value change!" << endl;
	cout << "str2 : " << str2 << endl;
	cout << "ref : " << ref << endl;


	cout << "----[Pointer]----" << endl;

	string str3("str3");
	string str4("str4");

	string *ptr = &str3;
	cout << "str3: " << str3 << endl;
	cout << "str4: " << str4 << endl;
	cout << "ptr : " << *ptr << endl;

	ptr = &str4;
	cout << "str3: " << str3 << endl;
	cout << "str4: " << str4 << endl;
	cout << "ptr : " << *ptr << endl;
}