#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	float a,b,c,x1,x2,x3,x4,X1,X2;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	float D = pow(b,2) - 4*a*c;
	if (D < 0) {
		cout << "Error";
		system("break");
	}
	else {
		X1 = (-b + sqrt(D))/(2*a);
		if (X1 < 0) {
			cout << "x1 = x2 = 0";
		}
		else {
			x1 = sqrt(X1);
			x2 = -sqrt(X1);
			cout << "x1 = " << x1 << "x2 = " << x2 << endl;
		}
		X2 = (-b - sqrt(D))/(2*a);
		if (X2 < 0) {
			cout << "x1 = x2 = 0";
		}
		else {
			x3 = sqrt(X2);
			x4 = -sqrt(X2);
			cout << "x3 = " << x3 << "x4 = " << x4 << endl;
		}
	 }

	getch();
	return 0;
}
