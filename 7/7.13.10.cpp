#include <iostream>
using namespace std;
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double calculate(double x, double y, double (*pf) (double, double));

int main() {
    double x, y;

    cout << "Now with pointer array: \n";
    double (*pm[3]) (double, double) = {add, subtract, multiply};
    cout << "Please enter x and y: ";
    while ((cin >> x >> y)) {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        for (int i = 0; i < 3; i++) {
            cout << "func #" << i + 1 << " = " << calculate(x, y, pm[i]) << endl;
        }
        cout << "Please enter ner x and y: ";
    }
    cout << "Done\n";
    return 0;
}

double add(double x, double y) {
    return x + y;
}
double subtract(double x, double y) {
     return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double calculate(double x, double y, double (*pf)(double, double)) {
     return pf(x, y);
}
