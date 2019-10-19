#include <iostream>
using namespace std;

int main()
{
	unsigned num;
	bool prime = true;

	cout << "Please enter a positive integer." << endl;
	cin >> num;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			prime = false;
			break;
		}
	}

	cout << "The number is " << (prime ? "a prime!" : "not a prime..") << endl;

	return 0;
}