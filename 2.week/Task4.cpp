#include<iostream>
using namespace std;

int main()
{

	int num1;
	int num2;
	int num3;

	bool checker;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << "Enter third number: ";
	cin >> num3;

	checker = ((num1 >= -1000 && num1 <= 1000) && (num2 >= -1000 && num2 <= 1000) && (num3 >= -1000 && num3 <= 1000)) ? true : false;

	if (checker)
	{
		if (num1 > num2&& num1 > num3)
		{
			cout << num1 << " ";
		}
		if (num2 > num1&& num2 < num3)
		{
			cout << num2 << " ";
		}
		if (num3 < num1 && num3 < num2)
		{
			cout << num3 << " ";
		}
	}
	else
	{
		cout << "One or two of the numbers you entered are not between -1000 and 1000";
	}

	return 0;
}