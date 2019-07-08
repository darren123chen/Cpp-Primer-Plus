#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    double x;
    cout << "Enter value: ";
    while(!(cin >> x))
    {
        cout << "Bad input. Please enter a number: ";
        cin.clear();
        while(cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;
    return 0;
}
