// init.cpp ?(assign.cpp)  changes on intiialization

#include <iostream>

int main(void)
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;                                 // int converted to float
	int guess = 3.9832;                             // double converted to int
	int debt = 7.2E12;                              // result not defined in c++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}
