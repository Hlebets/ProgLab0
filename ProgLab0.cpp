#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	try
	{
		int x, y;
		cout << "Enter first number: ";
		cin >> x;
		cout << "Enter second number: ";
		cin >> y;
		if (cin.fail() || x == 0 || y == 0)
		{
			throw invalid_argument("Invalid input");
		}
		cout << "The mid of " << x << " and " << y << " squared is " << (pow(x, 2) + pow(y, 2)) / 2 << endl;
		cout << "The geometrical mid of " << x << " and " << y << " is " << sqrt(fabs(x) * fabs(y)) << endl;
	}
	catch (exception &e)
	{
		cerr << "Error: " << e.what() << endl;
		return 1;
	}
	return 0;
}
