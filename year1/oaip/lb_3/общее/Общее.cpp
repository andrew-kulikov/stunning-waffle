#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	 float x, A=0, B=M_PI/2, M=20, H, y;
	 H = (B-A)/M;
	 cout << "A=" << A << " B=" << B << " M=" << M << " H=" << H << endl;
	 x = A;
	 cout << "x" << setw(15) << "y" << endl;
	 for (int i = 0; x <= B; i++) {
		 x=A+i*H;
		 y=sin(x)-cos(x);
		 cout << x << setw(15) << y << endl;
	 }
	 getch();
	 return 0;
}
