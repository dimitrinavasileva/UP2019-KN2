#include <iostream>
using namespace std;

int main()
{
	unsigned num;
	unsigned i = 1;
	int change = 1;

	do
	{
		cout << "Please enter an integer greater than 1." << endl;
		cin >> num;

	} while (num <= 1);
	
	while (i != 0)
	{
		for (unsigned j = 1; j <= i; j++)
		{
			cout << "*";
		}

		i += change;

		if (i == num)
		{
			change = -1;
		}

		cout << endl;
	}

	return 0;
}