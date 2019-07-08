#include <iostream>
int main () {
    using namespace std;
    char input;
    bool flag = false;
    cout << "Please enter one of the following choices:\n c) carnivore p) pianist\n t) tree g) game\n q to quit" << endl;
    input = 'c';
    while (cin >> input) {
        switch (input) {
            case 'c' :
                cout << "A carnivore is an animal.\n";
                break;
            case 'p':
                cout << "A pianist is a musician.\n";
                break;
            case 't':
                cout << "A maple is a tree.\n";
                break;
            case 'g':
                cout << "A game is interesting.\n";
                break;
            case 'q':
                exit (0);
            default:
                cout << "Please enter a c, p, t, or g: ";

        }
    }
    return 0;
}
