#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const int InchesInFoot = 12;
    const double convInchesToMeter = 0.0254;
    const double convLBtoKG = 2.2;
    int heightInFoots = 0;
    int weightInPounds = 0;
    int heightInInches = 0;
    cout << "Please, enter your height (foots): _" << "\b";
    cin >> heightInFoots;
    cout << "Please, enter your height (inches): __" << "\b\b";
    cin >> heightInInches;
    cout << "Please, enter your weight (pounds): __" << "\b\b";
    cin >> weightInPounds;

    heightInInches += heightInFoots * InchesInFoot;

    const double MetersInInch = 0.0254;
    double heightInMeters = heightInInches * MetersInInch;

    double weightInKg = weightInPounds / 2.2;

    double BMI = weightInKg / pow (heightInMeters, 2);

    cout << "Your BMI is: " << BMI << endl;

    cin.get ();
    cin.get ();

    return 0;
}
