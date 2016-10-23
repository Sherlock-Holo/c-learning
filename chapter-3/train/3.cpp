// the program is aimed to rell you  where you are

#include <iostream>

int main(void)
{
    using namespace std;
    const int chg = 60;

    float de;
    float min;
    float cmin;
    float sec;
    float csec;
    cout << "Enter a latitude in degress, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> de;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;
    cmin = min / chg;
    csec = sec / chg / chg;
    cout << de << " degrees, " << min << " minutes, " << sec << " seconds = " << de + cmin + csec << endl;
    return 0;
}
