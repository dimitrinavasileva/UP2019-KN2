#include <iostream>
using namespace std;

int main()
{
	double a;
	double b;
	double c;

	cout << "Please enter three numbers:" << endl;
	cin >> a >> b >> c;

	if (a + b >= c && b + c >= a && c + a >= b && a > 0 && b > 0 && c > 0)
	{
		cout << "Triangle exists!" << endl;
	}
	else
	{
		cout << "Triangle does not exist.." << endl;
	}
	
	return 0;
}