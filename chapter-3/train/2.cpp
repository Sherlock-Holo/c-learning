// the program is aimed to point out the BMI

#include <iostream>
#include <cmath>

int main(void)
{
    using namespace std;
    
    const int in_fl = 12;
    const double in_to_m = 0.0254;
    const double p_to_kg = 2.2;
    int inch;
    int pound;
    int floor;
    double m;
    double kg;

    cout << "Enter your high: ";
    cin >> floor;
    cout << "Enter your weight: ";
    cin >> pound;
    inch = floor * in_fl;
    kg = pound / p_to_kg;
    m = inch * in_to_m;
    cout << "you are " << inch << " inch high." << endl;
    cout << "you are " << kg << " weight." << endl;
    cout << "And your BMI is " << kg / (m * m) << endl;
    return 0;
}
