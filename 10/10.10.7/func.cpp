#include "header.h"

void Plorg::showPlorg() const {
    std::cout << "This plorg name " << this->name_ << " and CI = " << this->CI_ << std::endl;
}

void Plorg::setCI(const int n) {
    this->CI_ = n;
    this->showPlorg();
}
