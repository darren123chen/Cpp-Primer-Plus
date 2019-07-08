#include <iostream>
#include "header.h"

using namespace SALES;
using std::cout;
using std::endl;
int main() {
    double ar[4] = {1.11, 2.22, 3.33, 4.44};
    Sales my_sales;
    setSales(my_sales, ar, 4);
    showSales(my_sales);
    cout << endl;

    Sales my_sales2;
    setSales(my_sales2);
    showSales(my_sales2);

    cout << endl;
    return 0;
}
