#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int distance, gasoline = 0;

    cout.setf (ios_base::fixed, ios_base::floatfield);
    cout << "Please, enter how many kilometers you have driven: ";
    cin >> distance;
    cout << "Please, enter how many liters of gasoline you have used: ";
    cin >> gasoline;

    cout << "Car has gotten " << float (gasoline) / distance << " per kilometer.";

    cin.get ();
    cin.get ();

    return 0;
}
