#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int MagicSquare[3][3];
	const int n = 3;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			MagicSquare[i][j] = 1 + n * ((i - j + (n - 1) % 2)) + ((i + j + (n + 1) % 2)) * n;
			cout << MagicSquare[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

