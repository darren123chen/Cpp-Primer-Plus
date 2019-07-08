#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char fName[40], lName[40];
    char splitName[80];
    cout << "Enter your first name: ";
    cin.get (fName, 20).get();
    cout << "Enter your last name: ";
    cin.get (lName, 20).get();
    strcpy (splitName, lName);
    strcat (splitName, ", ");
    strcat (splitName, fName);
    cout << "Here's the information in a single string: " << splitName << endl;

    system ("pause");
    return 0;
}
