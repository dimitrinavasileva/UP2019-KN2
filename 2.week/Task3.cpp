#include<iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	bool checker;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	checker = ((num1 >= -1000 && num1 <= 1000) && (num2 >= -1000 && num2 <= 1000)) ? true : false;

	if (checker)
	{
		if (num1 < num2)
		{
			cout << num1 << " " << num2;
		}
		else //num2 < num1
		{ 
			cout << num2 << " " << num1;
		}
	}
	else
	{
		cout << "One or two of the numbers you entered are not between -1000 and 1000";
	}

	return 0;
}