// change value to Fahrenheit

#include <iostream>
#include <cmath>

void ft(int);

int main(void)
{
	using namespace std;
	double cls;
	cout << "Please enter a Celsius value: ";
	cin >> cls;
	ft(cls);
	return 0;
}

void ft(int n)
{
	using namespace std;
	double fts;
	fts = 1.8 * n + 32;
	cout << n << " degrees Celsius is " << fts << " degrees Fahrenheit.";
	cout << endl;
}
