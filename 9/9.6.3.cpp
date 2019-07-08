#include <iostream>
#include <new>
using namespace std;
struct chaff {
    char dross[20];
    int slag;
};
char buffer1[500];
const int n = 2;
void show(const chaff & );

int main() {
    chaff * pd1;

    pd1 = new (buffer1) chaff [n];

    strcpy(pd1[0].dross, "dross1");
    strcpy(pd1[1].dross, "dross2");
    pd1[0].slag = 10;
    pd1[1].slag = 11;

    for (int i = 0; i < n; i++) {
         show(pd1[i]);
    }

    return 0;
}

void show(const chaff & my_chaff) {
     cout << "Chaff dross: " << my_chaff.dross << ". Chaff slag: " << my_chaff.slag << endl;
}


