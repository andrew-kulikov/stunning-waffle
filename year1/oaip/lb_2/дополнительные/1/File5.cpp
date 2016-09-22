#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	int k, First, Last;
	cout << "k= ";
	cin >> k;
	if (k / 1000 < 1 || k / 1000 >= 10) {         // проверка на ввод 4-х -
		cout << "error, k is not 4-digit number";  // значного числа
		getch();
		exit(0);
	}
	else {
	Last = k % 10;
	First = (k - k%1000)/1000;
	cout << "First number: " << First << endl;
	cout << "Last number: " << Last << endl;
	int M = Last + First;
	double y, Tak, DoubleK;
	DoubleK = k;
	Tak = tan(DoubleK);
	switch (M) {
		case 3 : {
			y = pow(Tak,2) + pow(sin(DoubleK),2)/2.7;
			cout << "Sum = 3, y=" << y << endl;
			break;
		}
		case 5 : {
			y = pow(Tak,2) + pow(sin(DoubleK),2)/2.7;
			cout << "Sum = 5, y=" << y << endl;
			break;
		}
		case 7 : {
			y = log(abs(DoubleK-6));
			cout << "Sum = 7, y=" << y << endl;
			break;
		}
		case 8 : {
			y = log(abs(DoubleK-6));
			cout << "Sum = 8, y=" << y << endl;
			break;
		}
		case 9 : {
			y = log(abs(DoubleK-6));
			cout << "Sum = 9, y=" << y << endl;
			break;
		}
		case 10 : {
			y = exp(0.2*DoubleK);
			cout << "Sum = 10, y=" << y << endl;
			break;
		}
	default: {
		y = k*sin(pow(DoubleK,2));
		cout << "Sum is not 3, 5, 7, 8, 9, 10, y=" << y << endl;
	}
	}
	}
	getch();
	return 0;
}
