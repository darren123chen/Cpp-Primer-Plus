#include <iostream>
#include <cstring>
using namespace std;

struct car {
    char make[40];
    int year;
};

int main () {
    int quantity;
    cout << "How many cars do you wish to calalog? ";
    cin >> quantity;
    cin.get ();
    car * catalog = new car [quantity];

    for (int i = 0; i < quantity; i++)
    {
        cout << "Car #" << i + 1 << ":" <<endl;
        cout << "Please enter the make: ";
        cin.get(catalog[i].make, 40);
        cin.get();
        cout << "Please enter the year made: ";
        cin >> catalog[i].year;
        cin.get();
    }

    cout << "Here is your collection: " << endl;
    for (int i = 0; i < quantity; i++) {
         cout << catalog[i].year << " " << catalog[i].make << endl;
    }

    cout << endl;
    return 0;
}
