#include <iostream>
using namespace std;

template <typename T>
T max5(const T a[5]) {
    T my_max = 0;
    for (int i = 0; i < 5; i++) {
        if(a[i] > my_max)
            my_max = a[i];
    }
    return my_max;
}

int main() {
    int my_int[5] = {1, 2, 3, 4, 5};
    double my_double[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << max5(my_int) << endl;
    cout << max5(my_double) << endl;
    return 0;
}
