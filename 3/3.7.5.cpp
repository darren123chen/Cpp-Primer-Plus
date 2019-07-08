#include <iostream>
#include <cmath>

using namespace std;

int main () {
    long long worldPopulation, usPopulation = 0;

    cout.setf (ios_base::fixed, ios_base::floatfield);
    cout << "Enter the world's population: ";
    cin >> worldPopulation;
    cout << "Enter the population of the US: ";
    cin >> usPopulation;

    cout << "The population of the US is "
         << (long double) (usPopulation * 100) / worldPopulation << "% of the world population.";

    cin.get ();
    cin.get ();
    return 0;
}
