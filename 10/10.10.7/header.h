#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

class Plorg {
    private:
        char name_[19];
        double CI_;
    public:
        Plorg(char * name = (char *) "Plorga", double CI = 50) {
            strcpy (name_, name);
            CI_ = CI;
        };
        void showPlorg() const;
        void setCI(const int n);
};
