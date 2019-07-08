#ifndef STACK_H_
#define STACK_H_
#include <iostream>
#include <string>
static double running_total = 0;

struct customer {
    char fullname[35];
    double payment;
};

typedef struct customer Item;

class Stack
{
    private:
        enum {MAX = 10};
        Item stack_[MAX];
        int top_;
        double summ_;
    public:
        Stack();
        Stack(const Item * [], int n = 0);

        bool isempty() const;
        bool isfull() const;

        void showStack() const;
        void sumStack();

        bool push(const Item & item);
        bool pop();
};
#endif
