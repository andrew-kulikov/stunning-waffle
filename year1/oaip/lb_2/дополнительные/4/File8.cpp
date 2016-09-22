#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float a, y;
	cout << "a= ";
	cin >> a;
	if (a < -1) {
		y = 1/a;
		cout << "a<-1, f(a)=1/a, f(a)= " << y << endl;
	}
	else if (a >= -1 && a < 2) {
			 y = pow(a,2);
			 cout << "a>=-1, a<2, f(a)=a^2, f(a)= " << y << endl;
		 }
		 else {
			 y = 4;
			 cout << "a>=2, f(a)=4, f(a)= " << y << endl;
         }
	getch();
	return 0;
}
