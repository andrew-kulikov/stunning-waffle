#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int Size, k;
	cout << "Size? ";
	cin >> Size;

	float **Array = new float*[Size];
	for (int i = 0; i < Size; i++) {
		Array[i] = new float[Size];
	}
	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size; j++) {
			cin >> Array[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size; j++) {
			k = Array[i][i];
			if (Array[i][j] > k) {
				Array[i][j] = 1;
			}
			else Array[i][j] = 0;
			cout << Array[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < Size; i++) {
		delete[] Array[i];
	}
    return 0;
}

