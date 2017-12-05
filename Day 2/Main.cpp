#include <fstream>
#include <iostream>

int main() {
	const int row = 16;
	const int collomn = 16;
	int input[row][collomn];
	std::ifstream inFile;
	inFile.open("D:\\Temp.txt");
	if (!inFile) {
		std::cerr << "unable to open file input.txt";
		exit(1);
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < collomn; j++) {
			inFile >> input[i][j];
		}
	}
	std::cout << input[15][0];
	int temp = 0;
	std::cin >> temp;
}
