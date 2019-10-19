#include <iostream>
using namespace std;

int main()
{
	unsigned num;
	int fact = 1;

	cout << "Please enter a positive integer." << endl;
	cin >> num;

	for (int i = 2; i <= num; i++)
	{
		fact *= i;
	}

	cout << num << "! = " << fact << endl;

	return 0;
}
