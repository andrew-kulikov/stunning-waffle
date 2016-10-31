#include "stdafx.h"
#include <iostream>

using namespace std;

void Check(int *a, int *b) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i] == b[j]) {
				cout << "Wrong data!";
				exit(0);
			}
		}
	}
}

int main()
{
	int NumberOfDeadSlaves1, NumberOfDeadSlaves2, n[5], Number, check1[5], check2[5], BarrelNumber = 0;
	for (int i = 0; i < 5; i++) {
		n[i] = -1;
	}
	for (int i = 0; i < 5; i++) {
		check1[i] = -2;
	}
	for (int i = 0; i < 5; i++) {
		check2[i] = -3;
	}
	cout << "How many slaves died in the first day? ";
	cin >> NumberOfDeadSlaves1;
	cout << "And their numbers? ";
	for (int i = 0; i < NumberOfDeadSlaves1; i++) {
		cin >> Number;
		n[Number - 1] = 0;
		check1[i] = Number;
	}
	cout << "How many slaves died in the second day? ";
	cin >> NumberOfDeadSlaves2;
	cout << "And their numbers? ";
	for (int i = 0; i < NumberOfDeadSlaves2; i++) {
		cin >> Number;
		n[Number - 1] = 1;
		check2[i] = Number;
	}
	Check(check1, check2);
	for (int i = 0; i < 5; i++) {
		if (n[i] == -1) {
			n[i] = 2;
		}
	}
	for (int i = 0; i < 5; i++) {
		BarrelNumber += pow(3, 4 - i) * n[i];
	}
	cout << "Number of barrel is: " << BarrelNumber;
	return 0;
}