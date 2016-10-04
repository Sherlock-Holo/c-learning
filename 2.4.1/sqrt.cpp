#include <iostream>
#include <cmath>

int main(void)
{
	using namespace std;

	double area;
	cout << "Enter the fooor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's a the equivalent of a square " << side;
	cout << " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}
