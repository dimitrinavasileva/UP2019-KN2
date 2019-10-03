#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "Enter first side a: ";
	cin >> a;
	cout << "Enter second side b: ";
	cin >> b;

	int perimeter = 2 * (a + b);
	int area = a*b;

	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area << endl;

	return 0;
}