#include <iostream>
#include <array>

const int ArSize = 101;
int main ()
{
    std::array <long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = factorials[i - 1] * i;
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}
