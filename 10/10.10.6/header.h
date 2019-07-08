#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

class Move {
    private:
        double x_;
        double y_;
    public:
        Move(double a = 0, double b = 0) {
            x_ = a;
            y_ = b;
        };
        void showmove() const;
        Move add(const Move & m);

        void reset(double a = 0, double b = 0);
};
