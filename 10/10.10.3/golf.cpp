#include "golf.h"
Golf::Golf(const char * fullname, int handicap) {
    std::cout << "\nUsing default constructor.\n";
    strcpy(fullname_, fullname);
    handicap_ = handicap;
    std::cout << "Done function setgolf.\n";
}

int Golf::setgolf() {
    int hc;
    std::cout << "Please, enter player name: ";
    std::cin.getline(this->fullname_, Len);
    if (this->fullname_[0] == ' ' || this->fullname_[0] == '\0') {
        std::cout << "Empty string, data input terminated.";
         return 0;
    } else {
        std::cout << "Please, enter player handicap: ";
        std::cin >> this->handicap_;

        std::cout << "You entered: " << this->fullname_ << " " << this->handicap_ << std::endl;
        return 1;
    }
    std::cout << "Some bad error!";
    return 0;
}

void Golf::set_handicap(int handicap) {
     this->handicap_ = handicap;
     std::cout << "\nDone function handicap.\n";
     std::cout << "New " << this->fullname_ << " handicap: " << this->handicap_ << std::endl;
}

void Golf::showgolf() const {
     if (fullname_[0] == ' ' || fullname_[0] == '\0')
         std::cout << "No data for this player.\n";
     else
         std::cout << this->fullname_ << " handicap is " << this->handicap_ << " points.\n";
}
