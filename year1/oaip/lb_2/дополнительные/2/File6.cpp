#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float R, z;
	cout << "R= ";
	cin >> R;
	int k = (R*pow(sin(R),3)*10 + 5)/10;
	cout << k << endl;
	int ost;
	ost = k % 5;
	switch (ost) {
		case 0 : {
			z = R + sin(R/3);
			cout << "Ostatok pri delenii na 5 raven 0, z=" << z << endl;
			break;
		}
		case 1 : {
			z = tan(R+2);
			cout << "Ostatok pri delenii na 5 raven 1, z=" << z << endl;
			break;
		}
		case 2 : {
			z = exp(R-1) + atan(R);
			cout << "Ostatok pri delenii na 5 raven 2, z=" << z << endl;
			break;
		}
		case 4 : {
			z = R + sin(R/3);
			cout << "Ostatok pri delenii na 5 raven 4, z=" << z << endl;
			break;
		}
		default : {
			z = log(R+5)/3.7;
			cout << "Ostatok pri delenii na 5 ne raven 0, 1, 2 ,4, z=" << z << endl;
        }

    }
	getch();
	return 0;
}
