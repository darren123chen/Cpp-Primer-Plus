#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const int InchesInFoot = 12;
    int heightInInches = 0;
    cout.setf (ios_base::fixed, ios_base::floatfield);
    cout << "Please, enter your height in inches: ___" << "\b\b\b";
    cin >> heightInInches;
    cout << "Your height is: " << heightInInches / InchesInFoot << " foots "
         << heightInInches % InchesInFoot << " inches." << endl;

    return 0;
}
