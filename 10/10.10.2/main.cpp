#include <iostream>
#include "header.h"
using namespace std;
int main() {
    cout << "Setting object with constructor by default.";
    Person my_person;
    my_person.Show();
    my_person.FormalShow();

    string s1 = "John";
    char * ch = "Doe";
    cout << "\nInitializing object with 1 parameter.\n";
    Person my_person2(s1);
    my_person2.Show();
    my_person2.FormalShow();

    cout << "\nInitializing object with 2 parameters.\n";
    Person my_person3(s1, ch);
    my_person3.Show();
    my_person3.FormalShow();

    return 0;
}
