#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main () {
    struct pizza {
        char name[250];
        float diameter;
        float weight;
    };

    pizza newpizza;
    cout << "Enter pizza company name = ";
    cin.getline (newpizza.name, 250);
    cout << "Enter pizza diameter = ";
    cin >> newpizza.diameter;
    cout << "Enter pizza weight = ";
    cin >> newpizza.weight;
    cout << endl;

    cout << "pizza company name = " << newpizza.name << endl
         << "pizza company diameter = " << newpizza.diameter << endl
         << "pizza company weight = " << newpizza.weight << endl << endl;

    system ("pause");
    return 0;
}
