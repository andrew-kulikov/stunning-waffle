#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float x, y, s;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	if (y > 2*x) {
		s = sin(x)/cos(x) + pow(x,2);
		cout << "y > 2x, s=" << s << endl;
	}
	else if (y < 2*x) {
			 s = pow(abs(x+y),3);
			 cout << "y < 2x, s=" << s << endl;
		 }
		 else {
			 s = pow(x,1/3)*sin(x);
			 cout << "y = 2x, s=" << s << endl;
		 }
	getch();
	return 0;
}
