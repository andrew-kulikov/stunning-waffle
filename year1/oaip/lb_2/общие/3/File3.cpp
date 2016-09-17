#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, b, x;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	bool y = a>b ? true : false;
	cout << y << endl;
	x = y == true ? a : b;
	cout << x << endl;
	system("pause");
	return 0;
}
