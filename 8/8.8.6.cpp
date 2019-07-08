#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T a[], const int counter) {
    T my_max = 0;
    for (int i = 0; i < 5; i++) {
        if(a[i] > my_max)
            my_max = a[i];
    }
    return my_max;
}

template <> char * maxn <char *>(char * a[], const int counter) {
     char * my_max = a[0];
     for (int i = 1; i < counter; i++) {
         if(strlen(a[i]) > strlen(my_max))
             my_max = a[i];
     }
     return my_max;
}
int main() {
    char * str[5] = {"1", "2100", "5", "7", "300"};
    int my_int[6] = {1, 2, 3, 4, 5, 6};
    double my_double[4] = {1.1, 2.2, 3.3, 4.4};
    cout << maxn(my_int, 6) << endl;
    cout << maxn(my_double, 4) << endl;
    cout << maxn(str, 5) << endl;
    return 0;
}
