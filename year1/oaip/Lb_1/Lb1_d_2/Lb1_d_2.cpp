#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	int y = max(a,b);
	int x = min(a,b);
	cout << "max=" << y << endl;
	cout << "min=" << x << endl;
	getch();
	return 0;
}
