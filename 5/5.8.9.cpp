#include <iostream>
#include <string>
using namespace std;
int main () {
    string tmp;
    int i = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> tmp;
    while ("done" != tmp) {
        i++;
        cin >> tmp;
    }
    cout << "You entered a total of " << i << " words." << endl;
    cout << endl;
    return 0;
}
