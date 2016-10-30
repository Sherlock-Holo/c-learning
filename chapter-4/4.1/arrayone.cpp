// arrayone.cpp  small arraye of integers

#include <iostream>

int main(void)
{
        using namespace std;
        int yams[3];                              // creates array with three elements
        yams[0] = 7;
        yams[1] = 8;
        yams[2] = 6;

        int yamcosts[3] = {20, 30, 5};            // create, initialize array

        cout << "Total yams = ";
        cout << yams[0] + yams[1] + yams[2] << endl;
        cout << "The package with " << yams[1] << " yams costs ";
        cout << yamcosts[1] << " cents per yam." << endl;
        int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
        total = total + yams[2] * yamcosts[2];
        cout << "The total yam expense is " << total << " cnets." << endl;

        cout << endl << "Size of yams array = " << sizeof yams;
        cout << " bytes." << endl;
        cout << "Size of one element = " << sizeof yams[0];
        cout << "butes. " << endl;
        return 0;
}
