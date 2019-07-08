#include "header.h"

int main() {
    Item my_item = {"John Doe", 35000};
    Item my_item2 = {"Jane Doe", 21589};
    Stack my_stack;
    my_stack.showStack();

    my_stack.push(my_item);
    my_stack.push(my_item2);
    my_stack.push(my_item);
    my_stack.showStack();
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();

    return 0;
}
