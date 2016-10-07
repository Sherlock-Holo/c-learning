//create function

#include <iostream>

void blind(int);
void run(void);

int main(void)
{
	blind(3);
	blind(3);
	run();
	run();
	return 0;
}

void blind(int n)
{
	using namespace std;
	cout << n << " bind mice" << endl;
}

void run(void)
{
	using namespace std;
	cout << "See how they run" << endl;
}
