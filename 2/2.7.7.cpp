#include <iostream>
void showTime (int hour, int minute);
int main ()
{
    using namespace std;
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    showTime (hour, minute);
    return 0;
}

void showTime (int hour, int minute)
{
    using namespace std;
     cout << "Time: " << hour << ":" << minute << endl;
}
