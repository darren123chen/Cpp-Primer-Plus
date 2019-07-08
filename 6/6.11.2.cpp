#include <iostream>

const int Max = 10;
int main () {
    using namespace std;
    double donation[Max] = {};
    cout << "Please enter donations.\n";
    cout << "You may enter " << Max << " donations.\n";
    int i, donations_count = 0;
    bool flag = false;
    for (i = 0; i < Max; i++) {
        cout << "Donation #" << i + 1 << ": ";
        while (!(cin >> donation[i])) {
            cin.clear ();
            while (cin.get() != '\n')
                continue;
            cout << "Input terminated.\n";
            flag = true;
            break;
        }
        if (flag == true)
            break;
        donations_count++;
    }

    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += donation[i];
    double donations_average = total / donations_count;
    cout << endl << donations_average << " = average donation " << donations_count << "." << endl;
    int high_donations = 0;
    for (i = 0; i < Max; i++)
        donation[i] > donations_average ? high_donations++ : 0;
    cout << high_donations << " donations higher than average." << endl;
    return 0;
}
