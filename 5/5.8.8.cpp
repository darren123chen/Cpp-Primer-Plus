#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char tmp[200];
    int i = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> tmp;
    while (strcmp ("done", tmp)) {
        i++;
        cin >> tmp;
    }
    cout << "You entered a total of " << i << " words." << endl;
    cout << endl;
    return 0;
}
