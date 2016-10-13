
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	int k, FNumber, TotalNumberOfDigits, n, NumberOfDigit, Digit, FNumber1, FNumber2;
	Digit = 0;
	cout << "k= ";
	cin >> k;
	TotalNumberOfDigits = 0;
	n = 0;
	FNumber1 = FNumber2 = 0;
	while (TotalNumberOfDigits < k) {
		FNumber = FNumber1 + FNumber2;
		if (FNumber == 0) {
			FNumber = 1;
		}
		FNumber1 = FNumber2;
	    FNumber2 = FNumber;
		n = (int)log10((float)FNumber) + 1;
		TotalNumberOfDigits += n;
		cout << FNumber;
	}
	NumberOfDigit = TotalNumberOfDigits - k;
	cout << endl << "Fibonacci number: " << FNumber << "\tNumber of digit: " << NumberOfDigit + 1;
//	if (NumberOfDigit == 0) {
//		Digit = FNumber2 % 10;
//	}
//	else {
//		if (n == 1) {
//			Digit = FNumber;
//		}
//		else {
			for (int i = 0; i < NumberOfDigit + 1; i++) {
				Digit = FNumber % 10;
				FNumber = (int)FNumber / 10;
			}
//		}
//	}
	cout << endl << Digit << endl;
	getch();
	return 0;
}
