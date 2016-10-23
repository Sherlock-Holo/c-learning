// the program is aimed to change the second to second,minute,hour,day

#include <iostream>

int main(void)
{
        using namespace std;
        const int ch1 = 60;        // can use it many
        const int ch2 = 24;

        long second;
        long sec;
        long hour;
        long min;
        long day;
        long chmin;
        
        cout << "Enter the number of seconds: ";
        cin >> second;

        // calculate
        day = second / (ch1 * ch1 * ch2);
        chmin = second % (ch1 * ch1 * ch2);
        hour = chmin / (ch1 * ch1);
        chmin = chmin % (ch1 * ch1);
        min = chmin / ch1;
        chmin = chmin % ch1;
        sec = chmin;

        cout << second << " seconds = " << day << " days, " << hour << " hour, " << min << " minutes, "
                << sec << " seconds" << endl;
        return 0;
}
