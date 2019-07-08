#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main () {
    using namespace std;
    int count = 0;
    char ch;
    ifstream inFile;

    inFile.open ("test.txt");
    if (!inFile.is_open()) {
        cout << "Could not open the file" << endl;
        cout << "\nProgram terminated.\n";
        exit (EXIT_FAILURE);
    }
    while (inFile.good()) {
        ++count;
        inFile >> ch;
    }

    inFile.close();
    cout << "\nFile have " << count << " symbols, except whitespace.\n";
    cout << "\nProgram terminated.\n";
    return 0;
}
