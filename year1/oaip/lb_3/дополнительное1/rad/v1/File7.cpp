
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

long int Fib(int i)
{
	if (i < 1) return 0;
	if (i == 1) return 1;
	return Fib(i - 1) + Fib(i - 2);
}

int NumberOfDigits(int FNumber) {
	int NumberOfDigits;
	NumberOfDigits = (int)log10((float)FNumber) + 1;
	return NumberOfDigits;
}

int DigitInNumber(int FNumber, int NumberOfDigit, int NumberOfDigitsInFNumber) {
	int i, CurrentNumber;
	if (NumberOfDigitsInFNumber == 1) {
		CurrentNumber = FNumber;
	}
	else {
		for (i = 0; i < NumberOfDigit + 1; i++) {
			CurrentNumber = FNumber % 10;
			FNumber = (int)FNumber / 10;
		}
	}
	return CurrentNumber;
}

int main()
{
	int k, FNumber, TotalNumberOfDigits, n, count, NumberOfDigit, Digit;
	cout << "k= ";
	cin >> k;
	count = 1;
	TotalNumberOfDigits = 0;
	n = 0;
	while (TotalNumberOfDigits < k) {
		FNumber = Fib(count);
		n = NumberOfDigits(FNumber);
		TotalNumberOfDigits += n;
		count++;
		cout << FNumber;
	}
	NumberOfDigit = TotalNumberOfDigits - k;
	cout << endl << "Fibonacci number: " << FNumber << "\t" << "Digit: " << NumberOfDigit + 1;
	Digit = DigitInNumber(FNumber, NumberOfDigit, n);
	cout << endl << Digit << endl;
	getch();
	return 0;
}


