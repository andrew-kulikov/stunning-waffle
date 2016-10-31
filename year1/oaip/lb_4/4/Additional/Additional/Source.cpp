#include <iostream>

using namespace std;

void FromDecimal(int Number, char *b) {
	int Remainder, k;
	char a[3] = { '0', '1', '2' };
	k = 0;
	while (Number > 0) {
		Remainder = Number % 3;
		for (int j = 0; j < 3; j++) {
			if (Remainder == j) {
				b[k] = a[j];
				k++;
			}
		}
		Number = (int)(Number / 3);
	}
	cout << endl;
}

void Reverse(char *s)
{
	int len = strlen(s);
	char *s1 = new char[len];
	for (int j = 0; j < len; j++)
	{
		s1[len - j - 1] = s[j];
	}
	for (int j = 0; j < len; j++)
	{
		s[j] = s1[j];
		cout << s[j];
	}
	cout << endl;
	delete[] s1;
}

void Translate(char *s) {
	int Length, NumberOfZeros, MinNumberOfDigit, MaxNumberOfZero;
	NumberOfZeros = 0;
	MaxNumberOfZero = 0;
	MinNumberOfDigit = 100;
	Length = strlen(s);
	for (int i = 0; i < Length; i++) {
		if ((s[i] == '1') && (s[i + 1] == '0')) {
			s[i] = '0';
			s[i + 1] = '3';
		}
		if ((s[i] == '2') && (s[i + 1] == '0')) {
			s[i] = '1';
			s[i + 1] = '3';
		}
		if ((s[i] == '3') && (s[i + 1] == '0')) {
			s[i] = '2';
			s[i + 1] = '3';
		}
	}
	for (int i = 0; i < Length; i++) {
		if (s[i] == '0') {
			if (i > MaxNumberOfZero) {
				MaxNumberOfZero = i;
			}
			NumberOfZeros++;
		}
		if (s[i] != '0') {
			if (i < MinNumberOfDigit) {
				MinNumberOfDigit = i;
			}
		}
	}
	if (NumberOfZeros == 0)
		return;
	else {
		if (MaxNumberOfZero != NumberOfZeros - 1)
			Translate(s);
	}
}

int main()
{
	char Number3[1000] = {'0'};
	int DecimalNumber;
	cout << "Type number here: ";
	cin >> DecimalNumber;
	FromDecimal(DecimalNumber, Number3);
	Reverse(Number3);
	Translate(Number3);
	int l = strlen(Number3);
	for (unsigned int i = 0; i < l; i++) {
		if (Number3[i] != '0') {
			cout << Number3[i];
		}
	}
	return 0;
}