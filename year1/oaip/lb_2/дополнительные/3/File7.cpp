#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float x, y, z;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	cout << "z= ";
	cin >> z;
	if (x>abs(y-z) && x<y+z) {
		if (y>abs(x-z) && y<x+z) {
			if (z>abs(x-y) && z<x+y) {
				cout << "This is correct triangle";
			}
        }
	}
	else cout << "error";
	getch();
	return 0;
}
