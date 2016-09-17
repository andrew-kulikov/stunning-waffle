#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	float a,b,c,Y;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	int N;
	cout << "N=";
	cin >> N;
	switch(N)
	{
		case 2 : Y = b*c - pow(a,2); break;
		case 56 : Y = b*c; break;
		case 7 : Y = pow(a,2) + c; break;
		case 3 : Y = a - b*c; break;
		default : Y = pow(a+b,3); break;
	}
	cout << Y;
	getch();
	return 0;
}
