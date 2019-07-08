#include <iostream>

using namespace std;
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct my_exp {
    double expences[Seasons];
};

void fill (my_exp *);

void show (my_exp);

int main ()
{
    my_exp expences = {};
    fill(&expences);
    show(expences);
    return 0;
}

void fill(my_exp * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expences: ";
        cin >> pa->expences[i];
    }
}

void show(my_exp da)
{
     double total = 0.0;
     cout << "\nEXPENCES\n";
     for (int i = 0; i < Seasons; i++)
     {
         cout << Snames[i] << ": $" << da.expences[i] << endl;
         total += da.expences[i];
     }
     cout << "Total Expences: $" << total << endl;
}
