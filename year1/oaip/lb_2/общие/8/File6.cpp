#include <iostream.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	int N, k, LastNumber;
	cout << "N=";
	cin >> N;
	cout << "k=";
	cin >> k;
	cout << "sum = " << N + k << endl;
	LastNumber = (N + k) % 10;
	if (N < 20 && k < 80) {
			  switch(LastNumber)
		{
		case 1 : cout << "N + k = " << N + k << "Rubl'"; break;
		case 2 : cout << "N + k = " << N + k << " Rublya"; break;
		case 3 : cout << "N + k = " << N + k << " Rublya"; break;
		case 4 : cout << "N + k = " << N + k << " Rublya"; break;
		case 5 : cout << "N + k = " << N + k << " Rubley"; break;
		case 6 : cout << "N + k = " << N + k << " Rubley"; break;
		case 7 : cout << "N + k = " << N + k << " Rubley"; break;
		case 8 : cout << "N + k = " << N + k << " Rubley"; break;
		case 9 : cout << "N + k = " << N + k << " Rubley"; break;
		case 0 : cout << "N + k = " << N + k << " Rubley"; break;
		default : cout << "N + k = " << N + k; break;
		}
	}
	else {
		cout << "Error";
		system("break");
    }
	getch();
	return 0;
}
