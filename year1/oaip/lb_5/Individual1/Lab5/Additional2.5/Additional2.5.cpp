#include "stdafx.h"
#include <iostream>

using namespace std;

int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}

int main() {
	int Array1[102][102] = { 0 };
	int Height, Width;
	cout << "Height and width? ";
	cin >> Height >> Width;
	for (int i = 1; i <= Height; i++) {
		for (int j = 1; j <= Width; j++) {
			cin >> Array1[i][j];
		}
	}
	cout << endl;
	for (int i = 1; i <= Height; i++) {
		for (int j = 1; j <= Width; j++) {
			Array1[i][j] = max(max(Array1[i - 1][j], Array1[i][j - 1]), Array1[i][j]);
		}
	}
	for (int i = 1; i <= Height; i++) {
		for (int j = 1; j <= Width; j++) {
			cout << Array1[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}