// fltadd.cpp  precision problems with float

#include <iostream>

int main(void)
{
	using namespace std;
	float a = 2.34E22F;
	float b = a + 1.0F;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	return 0;
}
