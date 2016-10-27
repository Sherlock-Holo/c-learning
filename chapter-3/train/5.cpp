// the program is aimed to display the percentage of global population

#include <iostream>

int main(void)
{
        using namespace std;
        long long  world;
        long long us;
        double percent;

        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << "Enter the world's population: ";
        cin >> world;
        cout << "Enter the population of the US: ";
        cin >> us;
        percent =double(us) / double(world);
        percent = percent * 100;
        cout << "The populaiton of the US is " << percent << "% of the world population." << endl;
        return 0;
}
