#include <iostream>

using namespace std;
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill (double []);

void show (const double []);

int main ()
{
    double expences[Seasons];
    fill(expences);
    show(expences);
    return 0;
}

void fill(double pa[])
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expences: ";
        cin >> pa[i];
    }
}

void show(const double da[])
{
     double total = 0.0;
     cout << "\nEXPENCES\n";
     for (int i = 0; i < Seasons; i++)
     {
         cout << Snames[i] << ": $" << da[i] << endl;
         total += da[i];
     }
     cout << "Total Expences: $" << total << endl;
}
