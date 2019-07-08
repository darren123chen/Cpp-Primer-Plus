#include <iostream>
using namespace std;
long double factorial(long);

int main() {
    long number;
    cout << "Please enter factorial number: ";
    while (cin >> number && number > 0) {
        if (number == 0)
            cout << "0! = 1";
        else if (number == 1)
            cout << "1! = 1";
        else cout << number << "! = " << factorial(number);
        cout << "\nPlease enter next factorial number: ";
    }
    cout << endl;
    return 0;
}

long double factorial(long number) {
    if (number == 1)
        return 1;
    else return number * factorial(number - 1);
}
