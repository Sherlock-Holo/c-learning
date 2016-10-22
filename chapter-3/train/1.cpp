// the program is aimed to cahnge the high syntax

#include <iostream>

int main(void)
{
    using namespace std;
    const int cg = 12;
    int foot;
    int inch;
    cout << "Please enter your high:_____\b\b\b";
    cin >> inch;
    foot = cg * inch;
    cout << "Your are " << foot << " foots high." << endl;
    return 0;
}
