#include <iostream>

using namespace std;

int input(double *, const int);
void display(const double *, const int);
void average(const double *, const int);

const int Number = 10;

int main() {
    double scores[Number] = {};
    int real_number = 0;
    real_number = input(scores, Number);

    display(scores, real_number);
    average(scores, real_number);

    return 0;
}

int input(double * p, const int Number) {
    int i = 0;
    double temp = 0;
    cout << "You can terminate input by entering non numerical input.\n";
    cout << "Enter score # " << i + 1 << endl;
    while ((i < Number) && (cin >> temp)) {
        p[i] = temp;
        i++;
        cout << "Enter score # " << i + 1 << endl;
    }
    return i;
}

void display (const double * p, const int real_number) {
     cout << "Scores are:\n";
     for (int k = 0; k < real_number; k++) {
         cout << p[k] << " ";
     }
     cout << endl;
}

void average (const double * p, const int real_number) {
     double sum = 0;
     for (int k = 0; k < real_number; k++) {
         sum += p[k];
     }
     cout << "Average score: " << sum / real_number << endl;
}
