#include "header.h"

int main() {
    Move my_move1(5.2, .2);
    Move my_move2(1, 1);
    my_move1.showmove();
    Move my_move3 = my_move1.add(my_move2);
    my_move1.showmove();
    my_move3.showmove();
    my_move1.reset(0, 0);
    return 0;
}
