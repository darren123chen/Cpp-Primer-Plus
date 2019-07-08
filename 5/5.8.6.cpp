#include <iostream>
#include <array>
#include <string>
using namespace std;

const int Years = 3;
const int Months = 12;
int main () {
    const string month[Months] = {"January", "Februry", "March", "April", "May", "June", "July", "August", "September", "October", "Novemver", "December"};
    int sales[Years][Months];

    for (int i = 0; i < Years; i++) {
        for (int j = 0; j < Months; j++) {
            cout << "Please, enter sales in " << i + 1 << " years, and "
                 << month[j] << " = ";
        cin >> sales[i][j];
        }
    }

    int sum[3];
    for (int i = 0; i < Years; i++) {
         int sum_tmp = 0;
         for (int j = 0; j < Months; j++) {
             sum_tmp += sales[i][j];
         }
         sum[i] = sum_tmp;
    }

    for (int i = 0; i < Years; i++) {
        cout << "Average sales per year " << i + 1 << " = " << sum[i] << endl;
    }
    cout << "Average sales per year = " << sum[0] + sum[1] + sum[2] << endl;
    return 0;
 }
