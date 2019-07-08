#include <iostream>

const int strsize = 100;
const int ListSize = 4;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main () {
    using namespace std;
    bop * bop_list = new bop[ListSize];
    strcpy (bop_list[0].fullname, "John Smith");
    strcpy (bop_list[0].title, "Master");
    strcpy (bop_list[0].bopname, "KILLER");
    bop_list[0].preference = 0;

    strcpy (bop_list[1].fullname, "Jane Smith");
    strcpy (bop_list[1].title, "GrossMaster");
    strcpy (bop_list[1].bopname, "CUSROMER");
    bop_list[1].preference = 1;

    strcpy (bop_list[2].fullname, "Mike Bad");
    strcpy (bop_list[2].title, "Slave");
    strcpy (bop_list[2].bopname, "DadBad");
    bop_list[2].preference = 2;

    strcpy (bop_list[3].fullname, "Silvester Stallone");
    strcpy (bop_list[3].title, "PainKiller");
    strcpy (bop_list[3].bopname, "Mommy");
    bop_list[3].preference = 3;

    char input;
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name b.display by title\nc. display by bop name d. display by preference\nq. quit" << endl;
    cout << "Enter your choice: ";
    input = 'c';
    while (cin >> input) {
        switch (input) {
            case 'a':
                for (int i = 0; i < ListSize; i++) {
                    cout << bop_list[i].fullname << endl;
                }
                break;
            case 'b':
                for (int i = 0; i < ListSize; i++) {
                     cout << bop_list[i].title << endl;
                }
                break;
            case 'c':
                for (int i = 0; i < ListSize; i++) {
                    cout << bop_list[i].bopname << endl;
                }
                break;
            case 'd':
                for (int i = 0; i < ListSize; i++) {
                    switch (bop_list[i].preference) {
                        case 0:
                            cout << bop_list[i].fullname << endl;
                            break;
                        case 1:
                            cout << bop_list[i].title << endl;
                            break;
                        case 2:
                            cout << bop_list[i].bopname << endl;
                            break;
                        default:
                            cout << "Unexpected user preference." << endl;
                    }
                }
                break;
            case 'q':
                exit(0);
            default:
                cout << "Please enter an a, b, c, d or q: ";
        }
        cout << "\nEnter your choice: ";
    }
    return 0;
}
