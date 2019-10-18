#include <iostream>
using namespace std;

int main()
{
	double x;
	double y;

	cout << "Please enter coordinates x and y in that order." << endl;
	cin >> x >> y;

	if (x * x + y * y <= 4)
	{
		cout << "Point lies within the circle." << endl;
	}
	else
	{
		cout << "Point does not lie within the circle." << endl;
	}

	return 0;
}