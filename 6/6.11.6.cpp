#include <iostream>
#include <string>

int main () {
    using namespace std;

    struct contributors {
        string fullname;
        double contribution;
    };

    int input;
    cout << "The Society for the Preservation of Rightfuk Influence welcomes you.\n";
    cout << "Please, enter the number of contributors: ";
    int contributors_number = 0;
    cin >> contributors_number;
    cin.get();

    contributors * con_list = new contributors [contributors_number];

    for (int i = 0; i < contributors_number; i++)
    {
        cout << "Please, enter contributor # " << i + 1 << " fullname: ";
        getline (cin, con_list[i].fullname);
        cout << "Please, enter contributor # " << i + 1 << " contribution: ";
        cin >> con_list[i].contribution;
        cin.get();
    }

    int g_patrons = 0;
    cout << "Grand patrons: " << endl;
    for (int i = 0; i < contributors_number; i++) {
        if (con_list[i].contribution >= 10000) {
            cout << con_list[i].fullname << endl;
            g_patrons++;
        }
    }

    if (g_patrons == 0)
        cout << "none\n";
    int patrons = 0;
    cout << "Patrons: " << endl;
    for (int i = 0; i < contributors_number; i++) {
        if (con_list[i].contribution < 10000) {
            cout << con_list[i].fullname << endl;
            patrons++;
        }
    }
    if (patrons == 0)
        cout << "none\n";

    cout << "\nProgram terminated.\n";
    return 0;
}
