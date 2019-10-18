#include<iostream>
using namespace std;

int main()
{
	double number1;
	double number2;
	double number3;

	bool equalityCheckerForNumber1;
	bool equalityCheckerForNumber2;
	bool equalityCheckerForNumber1AndNumber2;

	cout << "Enter first number: ";
	cin >> number1;
	cout << endl;

	cout << "Enter second number: ";
	cin >> number2;
	cout << endl;

	cout << "Enter third number: ";
	cin >> number3;
	cout << endl;

	equalityCheckerForNumber1 = !(number3 == number1) ? true : false;
	equalityCheckerForNumber2 = !(number3 == number2) ? true : false;
	equalityCheckerForNumber1AndNumber2 = (number3 == number2 && number3 == number1) ? true : false;

	if (equalityCheckerForNumber1 && equalityCheckerForNumber2)
	{
		if (number1 < number2)
		{
			if (number3 > number1 && number3 < number2)
			{
				cout << "Number " << number3 << " is between " << number1 << " and " << number2;
			}
			else
			{
				cout << "Number " << number3 << " is NOT between " << number1 << " and " << number2;
			}
		}
		else
		{ // number1 > number2
			if (number3 > number2 && number3 < number1)
			{
				cout << "Number " << number3 << " is between " << number1 << " and " << number2;
			}
			else
			{
				cout << "Number " << number3 << " is NOT between " << number1 << " and " << number2;
			}
		}

	}
	else if (equalityCheckerForNumber1AndNumber2)
	{
		cout << "The numbers are equal -> number1: " << number1 << " = number2: " << number2 << " = number3: " << number3 << endl;
	}
	else
	{
		if (equalityCheckerForNumber1 == true)
		{
			cout << "number2: " << number2 << " = number3: " << number3 << endl;
		}
		else
		{
			cout << "number1: " << number1 << " = number3: " << number3 << endl;
		}

	}

	return 0;
}