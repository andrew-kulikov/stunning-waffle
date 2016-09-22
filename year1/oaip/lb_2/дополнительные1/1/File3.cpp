#include <iostream.h>
#include <math.h>
#include <conio.h>


using namespace std;

int main()
{
	int N;
	cout << "Please choose coordinate system: \n Enter 1 to choose Decartes system";
	cout << "\n Enter 2 to choose polar system \n";
	cin >> N;
	switch (N) {
		case 1 : {
			float x1, y1, x2, y2, Length;
			cout << "x1=";
			cin >> x1;
			cout << "y1=";
			cin >> y1;
			cout << "x2=";
			cin >> x2;
			cout << "y2=";
			cin >> y2;
			Length = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
			cout << "Length = " << Length;
			break;
		}
		case 2 : {
			float r1, a1, r2, a2, Length1;
			cout << "r1=";
			cin >> r1;
			cout << "Enter the angle 1 in degrees: ";
			cin >> a1;
			cout << "r2=";
			cin >> r2;
			cout << "Enter the angle 2 in degrees: ";
			cin >> a2;
			float a2new, a1new, fi;
			int n1, n2;
			n1 = a1 / 360;
			n2 = a2 / 360;
			cout << "n1=" << n1 << ", n2=" << n2 << endl;
			a1new = a1 - 360*n1;
			a2new = a2 - 360*n2;
			fi = abs(a1new - a2new);
			if (fi > 180) {
				fi -= 360;
				cout << "fi=" << fi << endl;
			}
			else {
				Length1 = sqrt(pow(r1,2) + pow(r2,2) - 2*r1*r2*cos(fi*M_PI/180));
				cout << "length = " << Length1 << endl;
			}
			break;
		}
		default : {
			cout << "error";
			exit(0);
		}
	}
	getch();
	return 0;
}

