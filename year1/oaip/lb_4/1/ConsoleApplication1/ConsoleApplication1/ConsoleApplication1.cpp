#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int IntoDecimal(int Basis, char *String) {
	int Decimal, k;
	char Symbol;
	char mass[18] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	Decimal = 0;
	k = 0;
	for (int i = strlen(String) - 1; i >= 0; i--) {
		Symbol = toupper(String[i]);
		for (int j = 0; j < 16; j++) {
			if (Symbol == mass[j]) {
				Decimal += j * pow(Basis, k);
				k++;
			}
		}
		if (Symbol > mass[Basis - 1]) {
			cout << "Wrong number!";
			_getch();
			exit(0);
		}
	}
	return Decimal;
}

void FromDecimal(int Basis, int Number) {
	int Remainder, k;
	char a[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	char b[80];
	k = 0;
	for (; Number > 0;) {
		Remainder = Number % Basis;
		for (int j = 0; j < 16; j++) {
			if (Remainder == j) {
				b[k] = a[j];
				k++;
			}
		}
		Number = (int)(Number / Basis);
	}
	for (int i = 0; i < k; i++) {
		cout << b[k - i - 1];
	}
	cout << endl;
}

int main()
{
	int FirstBasis, SecondBasis, Result, Decimal;
	char s[80];
	cout << "Type number to conversation: ";
	fgets(s, 100, stdin);
	Entering:
	cout << "Type 1st system basis: ";
	cin >> FirstBasis;
	if (FirstBasis > 16) {
		cout << "Wrong basis! Please type basis lower than 16" << endl;
		goto Entering;
	}
	Entering1: 
	cout << "Type 2nd system basis: ";
	cin >> SecondBasis;	
	if (SecondBasis > 16) {
		cout << "Wrong basis! Please type basis lower than 16" << endl;
		goto Entering1;
	}
	Decimal = IntoDecimal(FirstBasis, s);
	cout << "Number in decimal system: " << Decimal << endl;
	FromDecimal(SecondBasis, Decimal);
	return 0;
}
