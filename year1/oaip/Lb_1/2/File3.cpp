#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float D, x, C, p, K;
	cout << "D=";
	cin >> D;
	cout << "x=";
	cin >> x;
	cout << "C=";
	cin >> C;
	cout << "p=";
	cin >> p;
	cout << "K=";
	cin >> K;
	float B = exp(K);
	float A = x + sin(p);
	float Y = 1 + pow(K,2)/2*(A*B) - B + D*C;
	cout << "Y=" << Y << endl;
	getch();
	return 0;
}
