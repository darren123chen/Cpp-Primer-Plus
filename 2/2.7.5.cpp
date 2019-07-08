#include <iostream>
int transfer (int);
int main ()
{
    using namespace std;
    int Celsius, Fahrenheit;
    cout << "Please enter a Celsius value: ";
    cin >> Celsius;
    Fahrenheit = transfer (Celsius);
    cout << Celsius << " degree Celsius is " << Fahrenheit << " degree Fahrenheit." << endl;
    return 0;
}

int transfer (int Celsius)
{
     return 1.8 * Celsius + 32.0;
}
