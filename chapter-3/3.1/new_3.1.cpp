// limits.cpp

#include <iostream>
#include <climits>

void size(long long);

int main(void)
{
	using namespace std;
	int n_int = INT_MAX;                       // initialize n_int to max int value
	short n_short = SHRT_MAX;                  // symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// sizeof operator yields size if type or if variable
	cout << "int is ";
	size(n_int);
	cout << "short is ";
	size(n_short);
	cout << "long is "; 
	size(n_long);
	cout << "long long is ";
	size(n_llong);
	cout << endl;
	return 0;
}

void size(long long n)
{
	using namespace std;
	cout << sizeof(n) <<" bytes." << endl;
}
