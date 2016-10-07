// light years > unit

#include <iostream>
#include <cmath>

double au(double);

int main(void)
{
	using namespace std;
	double ly;
	cout << "Enter the number of light years: ";
	cin >> ly;
	double aus;
	aus = au(ly);
	cout << ly << " light years = " << aus << " astronomical units.";
	cout << endl;
	return 0;
}

double au(double n)
{
	return n * 63240;
}
