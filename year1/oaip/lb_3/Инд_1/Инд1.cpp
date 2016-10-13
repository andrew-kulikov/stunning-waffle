#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	long double f1, f2, x, FactorialForSin, elem, FactorialForCos;
	int NumberOfElements, NumberOfArguments;
	cout << "Please enter number of elements: ";
	cin >> NumberOfElements;
	cout << "Please enter number of x: ";
	cin >> NumberOfArguments;
	for (int i = 0; i < NumberOfArguments; i++) {
		cout << i + 1 << ")x=";
		cin >> x;
		FactorialForSin = 1;
		FactorialForCos = 1;
		f2 = 0;
		for (int j = 1; j <= NumberOfElements; j++) {
			elem = pow(-1.0, (float) j - 1.0)*(pow(x, 2 * j))*(1 / FactorialForCos + 2 * x / FactorialForSin);
			FactorialForSin *= 2 * j * (2 * j + 1);
			FactorialForCos *= 2 * j * (2 * j - 1);
			f2 += elem;
			//cout << " j= " << j << "\t elem = " << elem <<  "\t k= " << FactorialForCos << " FactorialForSin= " << FactorialForSin << endl;
    	}
		elem = 0;
		f1 = 2 * pow(x, 2)*sin(x) + pow(x, 2)*cos(x);
		cout << "f1=" << f1 << "\tf2=" << f2 << endl;
	}
	getch();
	return 0;
}
