#include <iostream>
#include <string>

using namespace std;

int main () {
    string fName, lName;
    string splitName;
    cout << "Enter your first name: ";
    getline (cin, fName);
    cout << "Enter your last name: ";
    getline (cin, lName);
    splitName = lName + ", " + fName;
    cout << "Here's the information in a single string: " << splitName << endl;

    system ("pause");
    return 0;
}
