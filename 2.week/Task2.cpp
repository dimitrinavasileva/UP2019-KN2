#include <iostream>
using namespace std;

int main()
{
	double a;
	double b;
	double c;

	cout << "Please enter three (uneven) numbers:" << endl;
	cin >> a >> b >> c;

	if (a > b)
	{
		if (c > a)
		{
			cout << c << endl;
		}
		else
		{
			cout << a << endl;
		}
	}
	else if (b > c) 
	{
		cout << b << endl;
	}
	else
	{
		cout << c << endl;
	}

	return 0;
}