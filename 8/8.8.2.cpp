#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    char * name;
    double weight;
    int calories;
};

void set_candy(CandyBar & candy, char * name = "Millennium Munch", const double weight = 2.85, const int calories = 350);
void show_candy(const CandyBar & candy);

int main() {
    CandyBar my_candy;
    set_candy(my_candy);
    show_candy(my_candy);

    return 0;
}

void set_candy(CandyBar & candy, char * name, const double weight, const int calories) {
     cout << "Candy setup...\n";
     candy.name = name;
     candy.weight = weight;
     candy.calories = calories;
     cout << "Done.\n";
}

void show_candy(const CandyBar & candy) {
     cout << "\nCandy: " << candy.name;
     cout << "\nweight: " << candy.weight;
     cout << "\ncalories: " << candy.calories << endl;
}
