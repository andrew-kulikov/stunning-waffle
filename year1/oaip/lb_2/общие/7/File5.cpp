#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	float a, b, c, x1, x2, x3, x4, t1, t2, D;
	int N;
	cout << "Enter 1 to solve ax^4+bx^2+c=0 \n";
	cout << "Enter 2 to solve ax^4+bx^3+cx^2+bx+a=0 \n";
	cout << "Enter 3 to solve x^3+px+q=0 \n";
	cin >> N;
	switch (N) {
	case 1: {
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		cout << "Now we will solve " << a << "x^2+" << b << "x+" << c << "=0\n";
		if (a == 0) {
			if (b == 0) {
				cout << "error";
				getch();
				exit(0);
			}
			else {
				x1 = -c/b;
				cout << "x=" << x1;
            }
		}
		else {
		if (b == 0) {
			if (-c/a < 0) {
				cout << "no roots";
				getch();
				exit(0);
			}
			else {
			x1 = sqrt(-c/a);
			cout << "x=" << x1;
			}
		}
		else {
		D = pow(b, 2) - 4 * a*c;
		if (D < 0) {
			cout << "Error";
			getch();
			exit(0);
		}
		else {
			t1 = (-b + sqrt(D)) / (2 * a);
			if (t1 < 0) {
				cout << "x1 = x2 = 0";
			}
			else {
				x1 = sqrt(t1);
				x2 = -sqrt(t1);
				cout << "x1 = " << x1 << "x2 = " << x2 << endl;
			}
			t2 = (-b - sqrt(D)) / (2 * a);
			if (t2 < 0) {
				cout << "x1 = x2 = 0";
			}
			else {
				x3 = sqrt(t2);
				x4 = -sqrt(t2);
				cout << "x3 = " << x3 << "x4 = " << x4 << endl;
			}
		}
		}
		}
		break;
	}
	case 2: {
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		cout << "Now we will solve " << a << "x^4+" << b << "x^3+" << c << "x^2+" << b << "x+" << a << "=0\n";
		if (a == 0) {
			if (b == 0) {
			    x1 = 0;
				cout << "x=0";
				getch();
				exit(0);
			}
			else {
				D = pow(c,2) - 4*pow(b,2);
				if (D < 0) {
					cout << "no roots";
					getch();
					exit(0);
				}
				else {
					x1 = (-c+sqrt(D))/(2*b);
					x2 = (-c-sqrt(D))/(2*b);
					cout << "x1=" << x1 << ", x2=" << x2 << endl;
                }
            }
		}
		else {
		D = pow(b, 2) + 8 * pow(a, 2) - 4 * a*c;
		if (D<0) {
			cout << "D<0, no roots";
			getch();
			exit(0);
		}
		else {
			t1 = ((-b) + sqrt(D)) / (2 * a);
			t2 = ((-b) - sqrt(D)) / (2 * a);
			cout << "t1=" << t1 << ", t2=" << t2 << endl;
			float D2 = pow(t1, 2) - 4;
			if (D2<0) {
				cout << "There are no roots according to t1" << endl;
			}
			else {
				x1 = (t1 + sqrt(D2)) / 2;
				x2 = (t1 - sqrt(D2)) / 2;
				cout << "x1=" << x1 << ", x2=" << x2 << endl;
			}
			float D3 = pow(t2, 2) - 4;
			if (D3<0) {
				cout << "There are no roots according to t2" << endl;
			}
			else {
				x3 = (t2 + sqrt(D2)) / 2;
				x4 = (t2 - sqrt(D2)) / 2;
				cout << "x3=" << x3 << ", x4=" << x4 << endl;
			}
			if (D3 && D2 < 0) {
				cout << "there are no roots" << endl;
			}
		}
		}
		break;
	}
	case 3: {
		float p, q, x0, D5, alpha, beta, k, n;
		cout << "p=";
		cin >> p;
		cout << "q=";
		cin >> q;
		cout << "Now we will solve x^3+" << p << "x+" << q << "=0" << endl;
		D5 = pow(q / 2, 2) + pow(p / 3, 3);
		k = -q*0.5 + sqrt(D5);
		n = -q*0.5 - sqrt(D5);
		cout << k << "\n" << n;
		if (D5<0) {
			cout << "There are no rational roots" << endl;
			getch();
			exit(0);
		}
		else {
			if (k < 0) {
				float abk = fabs(k);
				alpha = (-1)*powf(abk, 1.0/3);
			}
			else
				alpha = powf(k, 1.0/3);
			if (n < 0) {
				float abn = fabs(n);
				beta = (-1)*powf(abn, 1.0/3);
			}
			else
				beta = powf(n, 1.0/3);
			x0 = alpha + beta;
			cout << "x=" << x0 << endl;
		}
		break;
	}
	default: cout << "Error"; break;
	}
	getch();
	return 0;
}
