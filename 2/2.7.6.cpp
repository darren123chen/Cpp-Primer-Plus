#include <iostream>
double transfer (double);
int main ()
{
    using namespace std;
    double LY, AU;
    cout << "Enter the number of light years: ";
    cin >> LY;
    AU = transfer (LY);
    cout << LY << " light years = " << AU << " astronomical units." << endl;
    return 0;
}

double transfer (double LY)
{
     return 63240 * LY;
}
