#include <iostream>
using namespace std;

int main()
{
	double a = 0;
	double sum = 0;

	cout << "Please enter integers to sum." << endl;

	do
	{
		cin >> a;
		sum += a;

	} while (a != 0);

	cout << "Sum: " << sum << endl;

	return 0;
}