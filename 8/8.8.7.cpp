#include <iostream>

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main ()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Listening Mr. E's counts of things:\n";

    ShowArray(things, 6);
    cout << "Listening Mr. E's debts:\n";

    ShowArray(pd, 3);

    cout << "\nSummation of Mr.E's counts of things:\n";
    cout << SumArray(things, 6);
    cout << "\nSummation Mr.E's depts:\n";
    cout << SumArray(pd, 3);
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
     using namespace std;
     cout << "template A\n";
     for (int i = 0; i < n; i++)
         cout << arr[i] << ' ';
     cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
     using namespace std;
     cout << "template B\n";
     for (int i = 0; i < n; i++)
         cout << *arr[i] << ' ';
     cout << endl;
}

template <typename T>
T SumArray(T arr[], int n) {
     using namespace std;
     T sum = (T) 0;
     cout << "template C\n";
     for (int i = 0; i < n; i++)
         sum += arr[i];
     return sum;
}

template <typename T>
T SumArray(T * arr[], int n) {
     using namespace std;
     T sum = (T) 0;
     cout << "template D\n";
     for (int i = 0; i < n; i++)
         sum += *arr[i];
     return sum;
}
