#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float a, c, x, z, f;
	cout << "a= ";
	cin >> a;
	cout << "c= ";
	cin >> c;
	cout << "z= ";
	cin >> z;
	if (z <= 1) {
		x = pow(z,2) +1;
		cout << "z <= 1, x=" << x << endl;
	}
	else {
		x = 1 / sqrt(z-1);
		cout << "z > 1, x=" << x << endl;
    }
	int N;
	cout << "Enter 1 to choose f(x)=2x" << endl;
	cout << "Enter 2 to choose f(x)=x^2" << endl;
	cout << "Enter 3 to choose f(x)=x/3" << endl;
	cin >> N;
	if (N < 1 || N > 3 ) {
		exit(0);
	}
	else {
	switch(N) {
		case 1: f = 2*x; break;
		case 2: f = pow(x,2); break;
		case 3: f = x/3; break;
		default: cout << "Error"; break;
	}
	cout << "f(x)= " << f << endl;
	float y = a*pow(sin(pow(f,2)-1),3) + c*log(abs(x)) + exp(x);
	cout << y;
	}
	getch();
	return 0;
}
