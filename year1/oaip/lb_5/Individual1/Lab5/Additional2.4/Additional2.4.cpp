#include "stdafx.h"
#include <iostream>

using namespace std;

void BubbleSort(int *Array2, int n) {
	for (int i = 0; i < n; i++) {                   
		for (int j = 0; j < n - i - 1; j++) {
			if (Array2[j] > Array2[j + 1]) {
				swap(Array2[j], Array2[j + 1]);
			}
		}
	}
}

int min(int a, int b) {
	if (a <= b)
		return a;
	else
		return b;
}

int main() {
	int Array1[100][100];
	int Array2[100];
	int Height, Width, p, SizeOfArray2;
	cout << "Height and width? ";
	cin >> Height >> Width;
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			cin >> Array1[i][j];
		}
	}
	cout << endl;
	p = min(Height, Width);
	int q = p;
	SizeOfArray2 = 0;
	for (int i = 0; i < q; i++) {                     //put elements in array2
		for (int j = 0; (j < p) && (p >= 0); j++) {
			Array2[SizeOfArray2] = Array1[i][j];
			SizeOfArray2++;
		}
		p--;
	}
	cout << endl;
	BubbleSort(Array2, SizeOfArray2);
	p = q;
	SizeOfArray2 = 0;
	for (int i = 0; i < q; i++) {                     //take elements from sorted array and put into the first array
		for (int j = 0; (j < p) && (p >= 0); j++) {
			Array1[i][j] = Array2[SizeOfArray2];
			SizeOfArray2++;
		}
		p--;
	}
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			cout << Array1[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}