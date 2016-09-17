#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	float a,b,c,d,Z;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	if (c >= d && a < d) {
						  Z = a + b/c;
						  cout << "c >= d, a < d \n" ;
	}
	else if (c < d && a >= d) {
							   Z = a - b/c;
							   cout << "c < d, a >= d \n";
		 }
		 else Z = 0;
	cout << Z;
	getch();
	return 0;
}
