#include <iostream>

int main () {
    using namespace std;

    int input;
    cout << "The Kindom of Neutronia welcomes you, stranger.\n";
    cout << "Enter your destiny: ";

    while ((cin >> input) && (input >= 0)) {
        if (input > 35000)
            cout << "Your tax is: " << input * 0.2 - 3000 << " tvarps." << endl;
        else if (input > 15000)
            cout << "Your tax is: " << input * 0.15 - 1250 << " tvarps." << endl;
        else if (input > 5000)
            cout << "Your tax is: " << input * 0.1 - 500 << " tvarps." << endl;
        else cout << "Your tax is: 0 tvarps. Lucky you!" << endl;
        cout << "\nEnter your destiny: ";
    }
    cout << "\nProgram terminated.\n";
    return 0;
}
