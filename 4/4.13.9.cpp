#include <iostream>
#include <string>

using namespace std;

int main () {
    struct CandyBar {
        string name;
        float weight;
        int calories;
    };
    CandyBar * candy = new CandyBar [3];
    candy[0].name = "Cheesecake";
    candy[0].weight = 1.5;
    candy[0].calories = 2000;

    candy[1].name = "Cookies";
    candy[1].weight = 0.25;
    candy[1].calories = 300;

    candy[2].name = "Ice cream";
    candy[2].weight = 0.5;
    candy[2].calories = 1100;
    cout << "CandyBar 1 name = " << candy[0].name << endl
         << "CandyBar 1 weight = " << candy[0].weight << endl
         << "CandyBar 1 calories = " << candy[0].calories << endl;

    cout << "CandyBar 2 name = " << candy[1].name << endl
         << "CandyBar 2 weight = " << candy[1].weight << endl
         << "CandyBar 2 calories = " << candy[1].calories << endl;

    cout << "CandyBar 3 name = " << candy[2].name << endl
         << "CandyBar 3 weight = " << candy[2].weight << endl
         << "CandyBar 3 calories = " << candy[2].calories << endl;

    delete [] candy;
    system ("pause");
    return 0;
}
