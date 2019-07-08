#include <iostream>
#include "golf.h"

using namespace std;
int main() {
    Golf my_golf;
    my_golf.showgolf();
    Golf my_golf2("John Doe", 35);
    my_golf2.showgolf();

    Golf my_golf3("Jane Doe");
    my_golf3.showgolf();

    my_golf3.setgolf();
    my_golf3.showgolf();

    cout << "Setting new handicap for your user...\n";
    my_golf3.set_handicap(20);
    return 0;
}
