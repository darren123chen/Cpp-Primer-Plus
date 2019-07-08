#include <iostream>
#include <string>
namespace SALES
{
    const int QUARTERS = 4;
    class Sales {
        private:
            double sales_[QUARTERS];
            double average_;
            double max_;
            double min_;
        public:
            Sales();
            Sales(const double [], int n = 4);
            void showSales() const;
            void setSales();
            void setSales(const double [], int);
    };
}
