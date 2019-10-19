#include <iostream>
using namespace std;

int main()
{
	unsigned num;

	cout << "Please enter a positive integer." << endl;
	cin >> num;

	while (num > 0)
	{
		int pow = 1;

		while (pow * 2 <= num)
		{
			pow *= 2;
		}

		cout << 1;

		num -= pow;
		pow /= 2;

		while (pow > num)
		{
			pow /= 2;
			cout << 0;
		}
	}

	cout << endl;

	return 0;
}