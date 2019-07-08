#ifndef STACK_H_
#define STACK_H_
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

struct customer {
    std::string fullname;
    double payment;
};

typedef struct customer Item;

class List
{
    private:
        enum {MAX = 10};
        Item list_[MAX];
        int top_;
    public:
        List();

        bool isempty() const;
        bool isfull() const;

        void showList() const;

        bool add(const Item & item);

        void changeName (const int id);

        void changeVol (const int id);

        void showItem (const int id);

};
#endif
