#include<iostream>
using namespace std;

int main()
{
	short x1;
	short y1;
	short x2;
	short y2;
	bool checker;

	cin >> x1 >> y1 >> x2 >> y2;

	checker = ((x1 >= 1 && x1 <= 8) && (x2 >= 1 && x2 <= 8) && (y1 >= 1 && y1 <= 8) && (y2 >= 1 && y2 <= 8)) ? true : false;

	if (checker == true)
	{

		if (x1 == y1 && x2 == y2)
		{
			cout << "The positions are with one color.";
		}
		else
		{
			cout << "The positions are with different color.";
		}
	}
	else
	{
		cout << "You know... the chessboard has only 8 rows and columns.";
	}

	return 0;
}