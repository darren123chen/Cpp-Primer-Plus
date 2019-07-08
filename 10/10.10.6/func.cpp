#include "header.h"

void Move::showmove() const {
    std::cout << "This object x = " << x_ << " and y = " << y_ << std::endl;
}

Move Move::add(const Move & m) {
    this->x_ += m.x_;
    this->y_ += m.y_;
    return * this;
}

void Move::reset(double a, double b) {
    this->x_ = a;
    this->y_ = b;
    std::cout << "Object x and y reset.\n";
    this->showmove();
}
