#include<iostream>
using namespace std;

int main()
{
	short time;
	bool checker;

	cout << "Time is ";
	cin >> time;

	checker = (time >= 0 && time <= 24) ? true : false;

	if (checker == true)
	{
		if ((time >= 18 && time <= 24) || (time >= 1 && time <= 4))
		{
			cout << "Good evening!";
		}
		else if (time >= 4 && time <= 9)
		{
			cout << "Good morning!";
		}
		else
		{
			cout << "Good afternoon!";
		}
	}
	else
	{
		cout << "The time cannot be: " << time << " h.";
	}

	return 0;
}