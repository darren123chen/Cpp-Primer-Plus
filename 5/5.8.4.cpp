#include <iostream>
using namespace std;
int main () {
    float daphie_invest, cleo_invest;
    daphie_invest = cleo_invest = 100.0;
    int years = 0;
    do {
        daphie_invest += 10.0;
        cleo_invest *= 1.05;
        years++;
    } while (daphie_invest > cleo_invest);

    cout << "Cleo wins in " << years << " years." << endl;

    return 0;
}
