#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int latitudeDegrees = 0;
    int latitudeMinutes = 0;
    int latitudeSeconds = 0;
    const double minuteInDegrees = 0.0166666667;
    const double secondInDegrees = 0.000277777778;
    cout.setf (ios_base::fixed, ios_base::floatfield);
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl
         << "First, enter the degrees: ";
    cin >> latitudeDegrees;
    cout << "Next, enter minutes of arc: ";
    cin >> latitudeMinutes;
    cout << "Next, enter seconds of arc: ";
    cin >> latitudeSeconds;
    cout << latitudeDegrees << " degrees, "
         << latitudeMinutes << " minutes, "
         << latitudeSeconds << " seconds = "
         << latitudeDegrees + latitudeMinutes * minuteInDegrees + latitudeSeconds * secondInDegrees
         << " degrees.";

    cin.get ();
    cin.get ();
    return 0;
}
