#include "header.h"
using namespace SALES;
using std::cin;
using std::cout;
using std::endl;

Sales::Sales() {
    for (int i = 0; i < QUARTERS; i++) {
        sales_[i] = 0;
    }
    min_ = 0;
    max_ = 0;
    average_ = 0;
}
Sales::Sales(const double sale[], int n) {
    for (int i = 0; i < QUARTERS; i++) {
        sales_[i] = sale[i];
    }
    min_ = sales_[0];
    max_ = sales_[0];
    average_ = sales_[0];
    for (int i = 1; i < n; i++) {
        if (min_ > sales_[i]) min_ = sales_[i];
        if (max_ < sales_[i]) max_ = sales_[i];
        average_ += sales_[i];
    }
    average_ /= QUARTERS;

    for (int i = n; i < QUARTERS; i++) {
        sales_[i] = 0;
    }
    cout << "\nDone object initialization.\n";
}

void Sales::setSales() {
    for (int i = 0; i < QUARTERS; i++) {
        cout << "Please enter sale # " << i + 1 << " : ";
        cin >> sales_[i];
    }

    min_ = sales_[0];
    max_ = sales_[0];
    average_ = sales_[0];
    for (int i = 1; i < QUARTERS; i++) {
        if (min_ > sales_[i]) min_ = sales_[i];
        if (max_ < sales_[i]) max_ = sales_[i];
        average_ += sales_[i];
    }
    average_ /= QUARTERS;
}

void Sales::setSales(const double sale[], const int n) {
    for (int i = 0; i < n; i++) {
        sales_[i] = sale[i];
    }

    min_ = sales_[0];
    max_ = sales_[0];
    average_ = sales_[0];
    for (int i = 1; i < QUARTERS; i++) {
         if (min_ > sales_[i]) min_ = sales_[i];
         if (max_ < sales_[i]) max_ = sales_[i];
         average_ += sales_[i];
    }
    average_ /= 4;
}

void Sales::showSales() const {
    cout << "Sales: \n";
    for (int i = 0; i < QUARTERS; i++) {
        cout << "     # " << i + 1 << " : " << sales_[i] << endl;
    }
    cout << "    min : " << min_ << endl;
    cout << "    max : " << max_ << endl;
    cout << "average : " << average_ <<endl;
}
