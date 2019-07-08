#include <iostream>
#include <string>
#include <array>

using namespace std;

int main () {
    array<float, 3> length;

    cout << "Enter your 1st time = ";
    cin >> length[0];
    cout << "Enter your 2nd time = ";
    cin >> length[1];
    cout << "Enter your 3rd time = ";
    cin >> length[2];

    cout << "Your average time = " << float (length[0] + length[1] + length[2]) / 3 << endl;

    system ("pause");
    return 0;
}
