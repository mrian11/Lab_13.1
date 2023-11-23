// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsvar;
int main()
{
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-----------------------------------------------------" << endl;
	cout << "|" << setw(5) << " x" << "   |"
		<< setw(10) << "log((1 + x)/ (1 - x)) " << " |"
		<< setw(10) << "S   " << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		sum(); // виклик процедури обчислення суми
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(22) << setprecision(5) << log((1 + x) / (1 - x)) << " |"
			<< setw(10) << setprecision(5) << 2 * S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
		cout << "-----------------------------------------------------" << endl;
	}
	cin.get();
	return 0;
}////////////////////////////////////////////////////////////////////////////
