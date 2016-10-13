#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
	float a, b, c, x, y, max, mid, low;
	cout << "Enter a, b, c, x, y: ";
	cin >> a >> b >> c >> x >> y;
	if (a > b) {
		max = a;
		if (b > c) {
			mid = b;
			low = c;
		}
		else {
			mid = c;
			low = b;
		}
	}
	else {
		 max = b;
		 if (a > c) {
			 mid = a;
			 low = c;
		 }
		 else {
			 mid = c;
			 low = a;
         }
    }
	if (c > max) {
		max = c;
		if (a > b) {
			mid  = a;
			low = b;
		}
		else {
			mid = b;
			low = a;
        }
	}
	cout << "Max, mid, low" << "\n" << max << "\n" << mid << "\n" << low << "\n";
	if ((low < x && mid < y) || (low < y && mid < x)) {
		cout << "Right! \n";
	}
	else cout << ":(";
	getch();
	return 0;
}
