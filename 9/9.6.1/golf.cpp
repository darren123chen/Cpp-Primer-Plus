#include <iostream>
#include "golf.h"
using namespace std;
struct golf;

void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
    cout << "Done function setgolf.\n";
    cout << "full name: " << g.fullname << " hc: " << g.handicap << endl;
}

int setgolf(golf & g) {
    int hc;
    cout << "Please, enter player name: ";
    cin.getline(g.fullname, Len);
    if (g.fullname[0] == ' ' || g.fullname[0] == '\0') {
         cout << "Empty string, data input terminated.";
         return 0;
    } else {
        cout << "Please, enter player handicap: ";
        cin >> g.handicap;

        cout << "You entered: " << g.fullname << " " << g.handicap;
        return 1;
    }
    cout << "Some bad error!";
    return 0;
}

void handicap(golf & g, int hc) {
     g.handicap = hc;
     cout << "\nDone function handicap.\n";
     cout << "New " << g.fullname << " handicap: " << g.handicap << endl;
}

void showgolf(const golf & g) {
     if (g.fullname[0] == ' ' || g.fullname[0] == '\0')
         cout << "No data for this player.\n";
     else
         cout << g.fullname << " handicap is " << g.handicap << " points.\n";
}
