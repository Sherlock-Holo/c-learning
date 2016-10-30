// instr1.cpp  reading more than one string

#include <iostream>

int main(void)
{
        using namespace std;
        const int ArSize = 20;
        char name[ArSize];
        char dessert[ArSize];

        cout << "Enter your name:" << endl;
        cin >> name;
        cout << "Enter your favorite dessert:" << endl;
        cin >> dessert;
        cout << "I have some delicious " << dessert;
        cout << " for you, " << name << "." << endl;
        return 0;
}
