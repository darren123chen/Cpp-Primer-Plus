#include <iostream>
using namespace std;
int main () {
    int i;
    cout << "Type in number = ";
    cin >> i;
    int sum = 0;
    while (i != 0)
    {
        sum += i;
        cout << "sum = " << sum << endl;
        cout << "Type in number = ";
        cin >> i;
    }
    cout << "Program terminated." << endl;
    system ("pause");
    return 0;
}
