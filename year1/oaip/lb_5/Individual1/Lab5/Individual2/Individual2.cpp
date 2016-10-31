#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int Array1[100][100];
	int Array2[100][100];
	int Height, Width, min = 1000000;
	cout << "Type height and width: ";
	cin >> Height >> Width;
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			cin >> Array1[i][j];
			Array2[j][i] = Array1[i][j];
		}
	}
	for (int i = 0; i < Width; i++) {
		for (int j = 0; j < Height; j++) {
			if (Array2[i][j] < min) {
				min = Array2[i][j];
			}
		}
		cout << min << " ";
		min = 1000000;
	}
    return 0;
}

