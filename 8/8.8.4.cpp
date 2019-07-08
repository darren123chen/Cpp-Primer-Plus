#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
    char * str;
    int ct;
};

stringy defaultStr = {"Default stringy", 15};

void set(stringy & temp_stringy, char * testing);
void show(char * testing = "This is a string by default.", const int count = 1);
void show(const struct stringy = defaultStr, const int count = 1);
int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set (beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set (stringy & temp_stringy, char * testing) {
     temp_stringy.str = testing;
     temp_stringy.ct = strlen(temp_stringy.str);
}

void show(char * testing, const int count) {
    for (int i = 0; i < count; i++) {
        cout << testing << endl;
    }
}

void show(const struct stringy str, const int count) {
    for (int i = 0; i < count; i++) {
        cout << str.str << endl;
    }
}
