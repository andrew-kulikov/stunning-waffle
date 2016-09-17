#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	int G, CurYear, LastNumber;
	cout << "G=";
	cin >> G;
	cout << "Current Year=";
	cin >> CurYear;
	int Age = CurYear - G;
	if (Age < 0) {
		cout << "Error";
		system("break");
	}
	else {
	cout << "Age = " << Age << endl;
	LastNumber = Age % 10;
			  switch(LastNumber)
		{
		case 1 : cout << "Age = " << Age << "God"; break;
		case 2 : cout << "Age = " << Age << " Goda"; break;
		case 3 : cout << "Age = " << Age << " Goda"; break;
		case 4 : cout << "Age = " << Age << " Goda"; break;
		case 5 : cout << "Age = " << Age << " Let"; break;
		case 6 : cout << "Age = " << Age << " Let"; break;
		case 7 : cout << "Age = " << Age << " Let"; break;
		case 8 : cout << "Age = " << Age << " Let"; break;
		case 9 : cout << "Age = " << Age << " Let"; break;
		case 0 : cout << "Age = " << Age << " Let"; break;
		default : cout << "Age = " << Age; break;
		}
    }
	getch();
	return 0;
}
