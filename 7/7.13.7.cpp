#include <iostream>
const int Max = 5;
double * fill_array(double * begin, double * end);
void show_array (const double * begin, const double * end);
void revalue (double r, double * begin, double * end);

int main ()
{
    using namespace std;
    double properties[Max];

    double * end_ptr = fill_array(properties, properties + Max);
    show_array(properties, end_ptr);
    if (end_ptr > properties)
    {
        cout << "Enter ravaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end_ptr);
        show_array(properties, end_ptr);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array (double * begin, double * end)
{
    using namespace std;
    double * pt;
    double temp;
    int i = 0;
    for (pt = begin; pt != end; pt++)
    {
         cout << "Enter value#" << (i + 1) << ": ";
         cin >> temp;
         i++;
         if (!cin)
         {
             cin.clear();
             while (cin.get() != '\n')
                 continue;
             cout << "Bad input: input process terminated.\n";
             break;
         }
         else if (temp < 0)
             break;
         *pt = temp;
    }
    return pt;
}

void show_array (const double * begin, const double * end)
{
     using namespace std;
     const double * pt;
     int i = 0;
     for (pt = begin; pt != end; pt++)
     {
         cout << "Property #" << (i + 1) << ": $";
         i++;
         cout << *pt << endl;
     }
}

void revalue(double r, double * begin, double * end)
{
    double * pt;
     for (pt = begin; pt != end; pt++)
         *pt *= r;
}
