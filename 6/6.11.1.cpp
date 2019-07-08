#include <iostream>
#include <string>
#include <cctype>

int main () {
    using namespace std;
    cout << "Enter text, and type @"
        " to terminate input.\n";
    char ch, corrected;

    cin.get (ch);
    while (ch != '@') {
        if (!isdigit (ch)) {
            if (isupper (ch))
                corrected = tolower(ch);
            else
                corrected = toupper(ch);
            cout << corrected;
        }
        cin.get (ch);
    }
    cout << "Program terminated.\n\n";

    return 0;
}
