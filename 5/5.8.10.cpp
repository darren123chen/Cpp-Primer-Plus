#include <iostream>
#include <string>
using namespace std;
int main () {
    string tmp;
    int rows = 0;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        tmp += ".";
    }
    for (int i = rows - 1; i > - 1; i--) {
        tmp[i] = (char) 42;
        cout << tmp << endl;
    }

    cout << endl;
    return 0;
}
