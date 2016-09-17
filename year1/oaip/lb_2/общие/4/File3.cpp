#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	float L, x1, x2, m, k;
	cout << "x1=";
	cin >> x1;
	cout << "x2=";
	cin >> x1;
	cout << "m=" ;
	cin >> m;
	k = pow(cos(pow(x1,2)),3) + pow(sin(pow(x2,3)),2);
	if (k<1) {
			  L = pow(k,3) + powf(m,0.2);
			  cout << "k<1,k=" << k << endl;
	}
	else {
	 L = pow(k,2) - exp(m);
	 cout << "k >= 1, k=" << k << endl;
	}
	cout << L;
	getch();
	return 0;
}
