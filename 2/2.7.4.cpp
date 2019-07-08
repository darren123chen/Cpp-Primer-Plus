#include <iostream>
int main ()
{
    using namespace std;
    int age, month;
    cout << "Please enter your age:" << endl;
    cin >> age;
    month = age * 12;
    cout << age << " year is " << month << " months." << endl;
    return 0;
}
