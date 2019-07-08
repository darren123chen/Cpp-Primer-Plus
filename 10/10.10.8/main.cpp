#include "list.h"

int main() {
    Item my_item = {"John Doe", 35000};
    Item my_item2 = {"Jane Doe", 21589};
    List my_list;
    my_list.showList();

    my_list.add(my_item);
    my_list.add(my_item2);
    my_list.add(my_item);
    my_list.showList();

    my_list.changeName(2);
    my_list.changeVol(3);
    my_list.showList();
    my_list.showItem(3);

    return 0;
}
