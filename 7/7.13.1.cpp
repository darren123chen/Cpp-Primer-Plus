#include <iostream>

using namespace std;

double harmonic_mean(double, double);

int main() {
    double x, y;
    cout << "Please, enter two numbers: ";
    while ((cin >> x >> y) && (x != 0) && (y != 0)) {
        cout << "Harmonic mean of " << x << " and " << y << " = " << harmonic_mean (x, y);
        cout << "\n\nPlease, enter two new numbers: ";
    }
    cout << "Sorry, wrong input, program terminated.\n";
    return 0;
}

double harmonic_mean(double x, double y) {
    return 2.0 * x * y / (x + y);
}
