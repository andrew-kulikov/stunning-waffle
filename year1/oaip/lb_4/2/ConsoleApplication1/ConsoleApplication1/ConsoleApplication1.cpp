#include "stdafx.h"
#include "check.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "a = ";
	cin >> a;
	check_7(a);
	cout << endl;
	check_79(a);
	cout << endl;
	check_107(a);
	cout << endl;
	return 0;
}











//int Rest1 = 0, Last1 = 0, Rest2 = 0, Last2 = 0, Rest3 = 0, Last3 = 0;
//unsigned int a, b, c, N;
//cin >> a;
//cout << "1: Check for 7; 2: Check for 79; 3: Check for 107 ";
//cin >> N;
//b = a;
//c = a;
//switch (N) {
//
//case 1: {
//	while (a > 4096) {
//		Rest1 = a >> 12;
//		Last1 = a & 4095;
//		a = Rest1 + Last1;
//		cout << "r=" << Rest1 << "  l=" << Last1 << "   a=" << a << "\n";
//	}
//
//	while (a > 64) {
//		Rest1 = a >> 3;
//		Last1 = a & 7;
//		a = Rest1 + Last1;
//		cout << "r=" << Rest1 << "  l=" << Last1 << "   a=" << a << "\n";
//	}
//	cout << "Is divided by 7? " << ((a == 0) || (a == 7) || (a == 14) ||
//		(a == 21) || (a == 28) || (a == 35) || (a == 42) || (a == 49) || (a == 56) || (a == 63)) << endl;
//	break;
//}
//case 2: {
//	while (b > 711) {
//		Rest2 = b >> 6;
//		Last2 = b & 63;
//		b = Rest2 + Last2;
//		cout << "r=" << Rest2 << "  l=" << Last2 << "   a=" << b << "\n";
//	}
//
//	while (b > 79) {
//		Rest2 = b >> 3;
//		Last2 = b & 7;
//		b = Rest2 + Last2;
//		cout << "r=" << Rest2 << "  l=" << Last2 << "   a=" << b << "\n";
//	}
//	cout << "Is divided by 79? " << ((b == 0) || (b == 16) || (b == 25) ||
//		(b == 34) || (b == 43) || (b == 52) || (b == 61) || (b == 70) || (b == 79) || (b == 711)
//		|| (b == 18) || (b == 27) || (b == 36) || (b == 45)) << endl;
//	break;
//}
//
//case 3: {
//	while (c > 8192) {
//		Rest3 = c >> 13;
//		Last3 = c & 8063;
//		c = Rest3 + Last3;
//		cout << "r=" << Rest3 << "  l=" << Last3 << "   b=" << b << "\n";
//	}
//
//	while (c > 1024) {
//		Rest3 = c >> 10;
//		Last3 = c & 1023;
//		c = Rest3 + Last3;
//		cout << "r=" << Rest3 << "  l=" << Last3 << "   c=" << c << "\n";
//	}
//
//	while (c > 128) {
//		Rest3 = c >> 7;
//		Last3 = c & 127;
//		c = Rest3 + Last3;
//		cout << "r=" << Rest3 << "  l=" << Last3 << "   b=" << b << "\n";
//	}
//
//	if (c > 80) {
//
//		while (c > 16) {
//			Rest3 = c >> 4;
//			Last3 = c & 15;
//			c = Rest3 + Last3;
//			cout << "r=" << Rest3 << "  l=" << Last3 << "   c=" << c << "\n";
//		}
//	}
//	cout << "Is divided by 107? " << ((a % 107 == 0) || (c == 0) || (c == 7) || (c == 17) ||
//		(c == 27) || (c == 37) || (c == 47) || (c == 57) || (c == 67) || (c == 77) || (c == 87)
//		|| (c == 97) || (c == 107)) << endl;
//	break;
//}
//}