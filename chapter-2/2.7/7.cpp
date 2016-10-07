// display the time

#include <iostream>

void time(int,int);

int main(void)
{
	using namespace std;
	int hour;
	int minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	time(hour,minute);
	return 0;
}

void time(int h,int m)
{
	using namespace std;
	cout << "Time: " << h << ":" << m << endl;
}
