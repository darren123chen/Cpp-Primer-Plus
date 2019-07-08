#include <iostream>

using namespace std;

int fill_array(double [], const int);
void show_array(const double [], const int);
void reverse_array(double [], const int);

const int ArrSize = 10;

int main() {
    double arr[ArrSize] = {};
    int my_arrsize = fill_array(arr, ArrSize);
    show_array(arr, my_arrsize);
    reverse_array(arr + 1, my_arrsize - 2);
    show_array(arr, my_arrsize);
    cout << endl;
    return 0;
}

int fill_array(double ar[], const int limit) {
    double temp = 0;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Enter double value of array: ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        } else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], const int limit) {
     int i;
     cout << "Showing content of array: ";
     for (i = 0; i < limit; i++) {
         cout << ar[i] << " ";
     }
}

void reverse_array(double ar[], int limit) {
     int i, j;
     double temp = 0;
     cout << "\nReversing array...\n";
     for (i = 0, j = limit - 1; i < j; i++, j--) {
         temp =ar[i];
         ar[i] = ar[j];
         ar[j] = temp;
     }

     cout << "Done!\n";
}
