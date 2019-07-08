#include <iostream>
#include <string>
using namespace std;
int counter = 0;
void silly_func (string str, int n = 0);

int main() {
    string str;
    cout << "Please, enter string: ";
    cin >> str;

    silly_func(str, 3);
    cout << "Second attempt: \n";
    silly_func(str, 3);

    cout << "Attempt with one argument: \n";
    silly_func(str);

    return 0;
}

void silly_func(string my_str, int n) {
     counter++;
     if(n > 0) {
         for (int i = counter; i > 0; i--) {
             cout << my_str << endl;
         }

     } else cout << my_str << endl;
}
