#include <iostream>
#include <string>

using namespace std;

int main () {
    struct student {
        string firstName;
        string lastName;
        char grade;
        short age;
    };
    student newstudent;

    cout << "What is your first name? ";
    getline (cin, newstudent.firstName);
    cout << "What is your last name? ";
    getline (cin, newstudent.lastName);
    cout << "What letter grade do you deserve? ";
    cin >> newstudent.grade;
    cout << "What is your age?";
    cin >> newstudent.age;

    cout << "Name: " << newstudent.firstName << ", " << newstudent.lastName << endl;
    newstudent.grade += 1;
    cout << "Grade: " << newstudent.grade << endl;
    cout << "Age: " << newstudent.age << endl;

    system ("pause");
    return 0;
}
