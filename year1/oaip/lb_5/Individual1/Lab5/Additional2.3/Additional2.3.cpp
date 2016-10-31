#include "stdafx.h"
#include <iostream>

using namespace std;


int main() {
	int Array[100][100];
	int Height, Width, Size, n, i, j, p, q;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			Array[i][j] = 1;
		}
	}
	cout << "Height and width? ";
	cin >> Height >> Width;
	for (int i = 1; i <= Height; i++) {
		for (int j = 1; j <= Width; j++) {
			Array[i][j] = 0;
		}
	}
	Size = Height * Width;
	i = 1;
	j = 1;
	n = 0;
	for (;;) {
		while (Array[i][j + 1] == 0)
			Array[i][j++] = ++n;
		while (Array[i + 1][j] == 0)
			Array[i++][j] = ++n;
		while (Array[i][j - 1] == 0)
			Array[i][j--] = ++n;
		while (Array[i - 1][j] == 0)
			Array[i--][j] = ++n;
		if (n == Size - 1)
			break;
	}
	Array[i][j] = n + 1;
	for (int i = 1; i <= Height; i++) {
		for (int j = 1; j <= Width; j++) {
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}