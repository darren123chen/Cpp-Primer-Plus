#include <iostream>
#include <string>
const int Len = 40;
class Golf
{
    private:
        char fullname_[Len];
        int handicap_;
    public:
        Golf(const char * fullname = (char *)(" "), int handicap = 0);
        int setgolf();
        void set_handicap(int handicap);
        void showgolf() const;
};
