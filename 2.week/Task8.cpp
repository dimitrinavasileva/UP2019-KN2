#include<iostream>
using namespace std;

int main()
{
	int num;
	int units;
	int ten;
	int hundreds;

	cout << "Enter a number: ";
	cin >> num;

	bool checker = (num >= 100 && num <= 999) ? true : false;

	if (checker == true) {

		units = num % 10;
		ten = num / 10 % 10;
		hundreds = num / 100;

		if (units == ten && ten == hundreds)
		{
			cout << "Equal numbers!";
		}
		else if (units > ten&& ten > hundreds)
		{
			cout << "Increasing numbers!";
		}
		else if (units < ten && ten < hundreds)
		{
			cout << "Decreasing numbers!";
		}
		else 
		{
			cout << "The number is not natural!";
		}
	}

	return 0;
}