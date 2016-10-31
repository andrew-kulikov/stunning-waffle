#include "stdafx.h"
#include <iostream>

using namespace std;

float SumForElement(float **a, int i, int j) {
	float Sum = 0;
	for (int p = i - 1; p <= i + 1; p++) {
		for (int q = j - 1; q <= j + 1; q++) {
			Sum += a[p][q];
		}
	}
	return Sum;
}

float ZeroMatrix(float **a, int Height, int Width) {
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			a[i][j] = 0;
		}
	}
	return **a;
}

int main()
{
	int Height, Width, Sum = 0;
	cout << "Height, width? ";
	cin >> Height >> Width;
	float **Array = new float*[Height + 2];
	for (int i = 0; i < Height +2; i++) {
		Array[i] = new float[Width + 2];
	}
	float **Array1 = new float*[Height];
	for (int i = 0; i < Height; i++) {
		Array1[i] = new float[Width];
	}
	/*for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			Array1[i][j] = 0;
		}
	}
	for (int i = 0; i < Height + 2; i++) {
		for (int j = 0; j < Width + 2; j++) {
			Array[i][j] = 0;
		}
	}*/
	**Array = ZeroMatrix(Array, Height + 2, Width + 2);
	**Array1 = ZeroMatrix(Array1, Height, Width);

	for (int i = 1; i <= Height; i++) {
		for (int j = 1; j <= Width; j++) {
			cin >> Array[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			int p = i + 1, q = j + 1;
			Array1[i][j] = SumForElement(Array, p, q);
			cout << Array1[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < Width + 2; i++) {
		delete[] Array[i];
	}
	delete[] Array;
	for (int i = 0; i < Width ; i++) {
		delete[] Array1[i];
	}
	delete[] Array1;
	return 0;
}