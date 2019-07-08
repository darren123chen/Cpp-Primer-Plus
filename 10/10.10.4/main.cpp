#include "header.h"

using namespace SALES;
int main() {
    double sales[4] = {.5, 2.5, 23.5, 2};
    double sales2[3] = {.1, .2, .3};
    Sales my_sale;
    my_sale.setSales();
    my_sale.showSales();
    Sales my_sale2(sales, 4);
    my_sale2.showSales();
    my_sale2.setSales(sales2, 3);
    my_sale2.showSales();

    return 0;
}
