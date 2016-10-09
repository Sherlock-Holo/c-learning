// exceed.cpp  exceeding some itneger limits

#include <iostream>
#include <climits>                   // defines INT_MAX as largest int value
#define ZERO 0                       // make ZERO symbol for 0 value

int main(void)
{
	using namespace std;
	short sam = SHRT_MAX;        // initialize a variable to max value
	unsigned short sue = sam;    //okay if variable sam already defined
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Add $1 to each account." << endl << "Now ";
	sam++;
	sue++;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Poor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam--;
	sue--;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	return 0;
}
