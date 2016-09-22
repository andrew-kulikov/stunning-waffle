#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float x, y;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	/*
	float length;                          first solution
	length = sqrt(pow(x,2) + pow(y,2));
	if (length < 0.5 || length > 1) {
		   cout << "error";
	}
	else cout << "Right";
	*/

	/*if (abs(x) > 1 || abs(y) > 1 || (pow(x,2)+pow(y,2))<0.25) {
		cout << "Error";
		getch();
		exit(0);                       second solution
	}
	else {
	cout << "Right";
	} */
	getch();
	return 0;
}





