#include <iostream>

int main(void) {
	int val1;
	int val2;

	std::cout << "input 2 numbers : ";
	std::cin >> val1 >> val2;

	int result = 0;
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) {
			result += i;
		}
	} else {
		for (int i = val2 + 1; i < val1; i++) {
			result += i;
		}
	}

	std::cout << "result : " << result;

	return 0;
}