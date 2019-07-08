#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main () {
    using namespace std;

    struct contributors {
        string fullname;
        double contribution;
    };

    ifstream inFile ("test.txt");
    if (!inFile.is_open()) {
        cout << "Could not open the file" << endl;
        cout << "\nProgram terminated.\n";
        exit (EXIT_FAILURE);
    }

    int input;
    cout << "The Society for the Preservation of Rightfuk Influence welcomes you.\n";
    cout << "Please, enter the number of contributors: ";
    int contributors_number = 0;
    inFile >> contributors_number;
    inFile.get();
    cout << "Patrons number: " << contributors_number;
    cout << "\nMaking list of patrons...\n";
    contributors * con_list = new contributors [contributors_number];
    cout << "Success\n";

    while (inFile) {
        for (int i = 0; i < contributors_number; i++)
        {
            getline (inFile, con_list[i].fullname, '\n');
            inFile >> con_list[i].contribution;
            inFile.get();
        }
    }
    inFile.close();

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
