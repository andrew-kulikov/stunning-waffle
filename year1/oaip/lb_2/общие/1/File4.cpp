#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	int X,Y;
	cout << "X=";
	cin >> X;
	cout << "Y=";
	cin >> Y;
	if (X<Y) {
		X = 0;
		cout << "X=" << X << endl;
	}
	else {
		Y = 0;
		cout << "Y=" << Y << endl;
	}
	float A,B,C;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	if (A>B) {
			  if (B>C) {
				 cout << "Max number: " << A - 0.3;
			  }
			  else if (A>C) {
					   cout << "Max number: " << A - 0.3;
				   }
				   else cout << "Max number" << C - 0.3;
	}
	else if (B>C) {
					  cout << "Max number: " << B- 0.3;
		 }
		 else if (C>A) {
				  cout << "Max number: " << C -0.3;
			  }
	getch();
	system("pause");
	return 0;
}
