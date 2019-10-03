#include<iostream>
using namespace std;

int main()
{
	int a = 9;
	int b = 14;

	int temp = a;
	a = b;
	b = temp;

	cout << a << " " << b << endl;

	return 0;
}