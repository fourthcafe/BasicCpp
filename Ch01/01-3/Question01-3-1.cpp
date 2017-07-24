//
// Created by fourthcafe on 2017-07-22.
// BoxVolumn를 함수 오버로딩의 형태로 재구현해보기
//

#include <iostream>

int BoxVolumn(int length);

int BoxVolumn(int length, int width);

int BoxVolumn(int length, int width, int heigth);

int main(void) {
	std::cout << "[3, 3, 3] : " << BoxVolumn(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolumn(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolumn(7) << std::endl;
//	std::cout << "[D, D, D] : " << BoxVolumn() << std::endl;

	int seq_partner = 0;
}

int BoxVolumn(int length) {
	return length;
}

int BoxVolumn(int length, int width) {
	return length * width;
}

int BoxVolumn(int length, int width, int height) {
	return length * width * height;
}

