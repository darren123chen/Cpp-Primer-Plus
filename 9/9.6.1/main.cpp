#include <iostream>
#include "golf.h"

using namespace std;
int main() {
    golf my_player, my_player2;
    setgolf(my_player, "Alex", 30);
    setgolf(my_player2);

    handicap(my_player, 20);

    showgolf(my_player);
    showgolf(my_player2);
    cout << endl;
    return 0;
}
