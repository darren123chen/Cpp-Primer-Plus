#include <iostream>
int main () {
    using namespace std;
    int i1, i2, i3 = 0;
    cout << "Enter first integer = ";
    cin >> i1;
    cout << "Enter second integer = ";
    cin >> i2;

    for (int i = i1; i <= i2; i++) {
        i3 += i;
    }

    cout << "Your sum = " << i3 << endl;

    system ("pause");

    return 0;
}
