#include <iostream>
#include <string>

using namespace std;

int main () {
    struct CandyBar {
        string name;
        float weight;
        int calories;
    };
    CandyBar Mocha_Munch = {"Mocha Munch", 2.3, 350};
    cout << "CandyBar name = " << Mocha_Munch.name << endl
         << "CandyBar weight = " << Mocha_Munch.weight << endl
         << "CandyBar calories = " << Mocha_Munch.calories << endl;

    system ("pause");
    return 0;
}
