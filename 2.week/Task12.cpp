#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a;
	double b;
	double c;

	cout << "Please enter coefficients a, b and c in that order:" << endl;
	cin >> a >> b >> c;

	double D = b * b - 4 * a * c;

	if (D < 0) {
		cout << "No real solutions!" << endl;
	}
	else if (D == 0)
	{
		double x = -b / (2 * a);
		cout << "Single real solution: " << x << endl;
	}
	else
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		cout << "Two real solutions: " << x1 << " and " << x2 << "." << endl;
	}

	return 0;
}