// bondini,cpp  using escape sequences

#include <iostream>

int main(void)
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!" << endl;
	cout <<"Enter your agent code:_________\b\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "..." << endl;
	cout << "\aCode verified! Proceed with Plan 23!" << endl;
	return 0;
}
