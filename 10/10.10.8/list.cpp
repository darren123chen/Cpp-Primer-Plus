#include "list.h"
List::List()
{
    top_ = 0;
}

bool List::isempty() const
{
    return top_ == 0;
}

bool List::isfull() const
{
    return top_ == MAX;
}
void List::showList() const {
    for (int i = 0; i < top_; i++) {
        std::cout << "Customer " << this->list_[i].fullname << " payment " << this->list_[i].payment << std::endl;
    }
}

bool List::add(const Item & item) {
    if (this->top_ < MAX) {
        this->list_[this->top_++] = item;
        return true;
    } else {
        return false;
    }
}

void List::changeName(const int id) {
    std::cout << "Please, enter new item name: ";
    getline(std::cin, list_[id - 1].fullname);
    std::cout << "Done\n";
}

void List::changeVol(const int id) {
    std::cout << "Please, enter new item value: ";
    cin >> list_[id - 1].payment;
    std::cout << "Done\n";
}

void List::showItem(const int id) {
    std::cout << "Your item data: " << list_[id - 1].fullname << " " << list_[id - 1].payment << std::endl;
}
