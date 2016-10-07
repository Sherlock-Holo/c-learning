// display the age

#include <iostream>
#include <cmath>

int month(int);

int main(void)
{
	using namespace std;
	int age;
	int result;
	cout << "Enter the age: ";
	cin >> age;
	result = month(age);
	cout << "You have spent " << result << " months." << endl;
	return 0;
}

int month(int n)
{
	using namespace std;
	int months;
	months = n * 12;
	return months;
}
