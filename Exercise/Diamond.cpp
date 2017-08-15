//
// Created by fourthcafe on 2017. 7. 31..
//

#include <iostream>


// spaceCnt :: 좌측 여백 갯수
// writeCnt :: 찍을 *의 갯수
void writeRow(int spaceCnt, int writeCnt) {
	for (int j = 1; j <= spaceCnt; j++) {
		std::cout << " ";
	}

	for (int j = 1; j <= writeCnt; j++) {
		std::cout << "*";
	}

	std::cout << std::endl;
}

void writeDiamond(int row) {
	int height = 2 * row - 1;

	for (int i = 1; i <= height; i++) {
		if (i <= row) {
			writeRow(row - i, 2 * i - 1);
		} else {
			writeRow(i - row, 2 * (2 * row - i) - 1);
		}
	}
}


int main() {
	writeDiamond(10);
}
