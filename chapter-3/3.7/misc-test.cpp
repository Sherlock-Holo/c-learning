// use the wchar_t and wcout

#include <iostream>

int main(void)
{
	using namespace std;
	wchar_t bob = L'P';
	wcout << bob << endl;
	wcout << L"tall" << endl;
	return 0;
}
