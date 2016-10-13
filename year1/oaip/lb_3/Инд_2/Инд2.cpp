#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	 float x, a=0, b=1, h, y, min = 2147483647, minx;
	 int N;
	 cout << "Type number of parts: ";
	 cin >> N;
	 h = (b-a)/N;
	 cout << "a=" << a << " b=" << b << " N=" << N << " Step value: " << h << endl;
	 cout << "x" << setw(15) << "y" << endl;
	 for (x = a; x <= b; x+=h) {
		 y=sinh(x)+acos(x)-1.5;
		 if (abs(y) < min) {
			 min = y;
			 minx = x;
		 }
		 cout << x << setw(15) << y << endl;
	 }
	 cout << "minx=" << minx << setw(15) << "miny=" << min;
	 getch();
	 return 0;
}
