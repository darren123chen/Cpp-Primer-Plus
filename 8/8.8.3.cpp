#include <iostream>
#include <string>
using namespace std;

void my_to_upper(const string & str);
int main() {
    string str;
    cout << "Enter a string(q to quit): ";
    while ((getline(cin, str)) && (str != "q")) {
        my_to_upper(str);
        cout << "New string (q to quit): ";
    }
    return 0;
}

void my_to_upper(const string & str) {
     string upper_str = str;
     for (int i = 0; i < str.size();i++) {
         upper_str[i] = toupper(str[i]);
     }
     cout << upper_str << endl;
}
