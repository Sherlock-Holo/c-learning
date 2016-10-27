// the progran is aimed to change EU to US

#include <iostream>

int main(void)
{
        using namespace std;
        float eu;
        float us;
        cout << "Enter the EU: ";
        cin >> eu;
        us = 62.14 * 3.875 / eu;
        cout << "The us is: " << us <<endl;
        return 0;
}
