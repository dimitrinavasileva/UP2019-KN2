#include <iostream>
using namespace std;

int main()
{
	int thr;
	int tmin;
	int tsec;
	int hr;
	int min;
	int sec;

	cout << "Please enter hours, minutes and seconds:" << endl;
	cin >> thr >> tmin >> tsec;

	hr = 24 - thr;
	min = 60 - tmin;

	if (min != 60)
	{
		hr--;
	}
	else
	{
		min = 0;
	}

	sec = 60 - tsec;

	if (sec != 60)
	{
		if (min == 0)
		{
			min = 59;
			hr--;
		}
		else
		{
			min--;
		}
	}
	else
	{
		sec = 0;
	}

	cout << hr << " hours, " << min << " minutes, " << sec << " seconds until midnight." << endl;

	return 0;
}