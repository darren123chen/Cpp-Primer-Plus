#include <iostream>
long double probability (unsigned numbers, unsigned powerball, unsigned picks);
int main ()
{
    using namespace std;
    double total, choices, powerball;
    cout << "Enter the total number of choices on the game card,\nthe number of powerball numbers\n"
            "and the number of picks allowed.\n";
    while ((cin >> total >> powerball >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability (total, powerball, choices);
        cout << " of winning.\n";
        cout << "Next three numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

long double probability (unsigned numbers, unsigned powerball, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result / powerball;
}
