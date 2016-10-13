#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float x0, y0, r, x, y, Length;
	cout << "Enter center coordinates and radius: ";
	cin >> x0 >> y0 >> r;
	cout << "Enter point coordinates: ";
	cin >> x >> y;
	Length = sqrt(pow(x-x0,2)+pow(y-y0,2));
	if (Length > r) {
		cout << "Point isn't on the circle";
	}
	else cout << "Point is in the circle";
	getch();
	return 0;
}
