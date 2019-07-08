#include <iostream>
#include <cmath>

using namespace std;

int main () {
    float euroAutoConsFig, usAutoConsFig = 0.0;
    const float milesInKm = 0.6214;
    const float gallonsInLiter = 1 / 3.875;

    cout.setf (ios_base::fixed, ios_base::floatfield);
    cout << "Please, enter how many liters per 100 kilometers is your automobile gets: ";
    cin >> euroAutoConsFig;

    usAutoConsFig = 100 / euroAutoConsFig * milesInKm / gallonsInLiter;

    cout << "Your car can ride " << int (usAutoConsFig) << " miles per gallon.";

    cin.get ();
    cin.get ();

    return 0;
}
