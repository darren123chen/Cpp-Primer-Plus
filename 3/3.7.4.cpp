#include <iostream>
#include <cmath>

using namespace std;

int main () {
    long seconds = 0;
    int days, hours, minutes, secondsLast = 0;

    const int HoursInDay = 24;
    const int MinutesInHour = 60;
    const int SecondsInMinute = 60;
    const int SecondsInHour = SecondsInMinute * MinutesInHour;
    const int SecondsInDay = SecondsInHour * HoursInDay;

    cout.setf (ios_base::fixed, ios_base::floatfield);
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    days = seconds / (HoursInDay * MinutesInHour * SecondsInMinute);
    hours = (seconds - days * SecondsInDay) / SecondsInHour;
    minutes = (seconds - days * SecondsInDay - hours * SecondsInHour) / SecondsInMinute;
    secondsLast = seconds - days * SecondsInDay - hours * SecondsInHour - minutes * SecondsInMinute;

    cout << seconds << " seconds = "
         << days << " days, " << hours << " hours, " << minutes << " minutes, "
         << secondsLast << " seconds.";

    cin.get ();
    cin.get ();

    return 0;
}
