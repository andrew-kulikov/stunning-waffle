#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	 float x, a=1, b=4, h=1, y;
	 cout << "a=" << a << " b=" << b << " Step value: " << h << endl;
	 cout << "x" << setw(15) << "y" << endl;
	 for (x = a; x <= b; x+=h) {
		 y=exp(-x)*cosh(x);
		 cout << x << setw(15) << y << endl;
	 }
	 getch();
	 return 0;
}
