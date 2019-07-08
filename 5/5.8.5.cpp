#include <iostream>
#include <array>
#include <string>
using namespace std;
int main () {
    array <string, 12> month = {"january", "februry", "march", "april", "may", "june", "july", "august", "september", "october", "novemver", "december"};
    array <int, 12> sales;

    for (int i = 0; i < 12; i++)
    {
        cout << "Please, enter sales in " << month[i] << " = ";
        cin >> sales[i];
    }

    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += sales[i];
    }

    cout << "Average sales per year = " << sum << endl;
    return 0;
 }
