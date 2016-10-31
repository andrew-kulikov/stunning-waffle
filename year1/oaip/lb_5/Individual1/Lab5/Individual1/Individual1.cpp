#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int Array[1000] = {0};
	int NumberOfElements, NumberOfInversions;
	cin >> NumberOfElements;
	NumberOfInversions = 0;
	for (int i = 0; i < NumberOfElements; i++) {
		cin >> Array[i];
	}
	for (int i = 0; i < NumberOfElements; i++) {
		for (int j = 1; j < i; j++) {
			if (Array[j] > Array[i]) {
				NumberOfInversions++;
			}
		}
	}
	cout << endl << "Number of inversions is: " << NumberOfInversions << endl;
    return 0;
}

