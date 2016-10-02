#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int sumOfDigits(int number) {
	int sum, integralPart, rem;
	sum = 0;
	integralPart = number;
	while (integralPart) {
		rem = integralPart % 10;
		sum = sum + rem;
		integralPart = integralPart / 10;
	}
	return sum;
}

void checkSumOfDigits(int from, int to, int multiplicator) {
	int i, sum1, sum2;
	for (i = from; i < to; i++) {
		sum1 = sumOfDigits(i);
		sum2 = sumOfDigits(i * multiplicator);

		if (sum1 == sum2) {
			cout << "\t" << i << "\tdoes not increase when multiplied by\t" << multiplicator << endl;
		}
	}
	cout << endl;
}

int main()
{
	int multiplicator;
	int from = 10;
	int to = 99;

	for (multiplicator = 2; multiplicator <= 9; multiplicator++) {
		checkSumOfDigits(from, to, multiplicator);
	}

	_getch();
	return 0;
}