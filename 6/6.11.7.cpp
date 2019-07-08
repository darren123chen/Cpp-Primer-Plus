#include <iostream>
#include <string>

int main () {
    using namespace std;
    string str;
    int vowel_iter, consonants_iter, other_iter;
    vowel_iter = consonants_iter = other_iter = 0;
    cout << "Enter words (q to quit): \n";
    while ((cin >> str) && (str != "q")) {
        str[0] = tolower(str[0]);
        if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str [0] == 'u' || str[0] == 'y')
            vowel_iter++;
        else if (str[0] == 'b' || str[0] == 'c' || str[0] == 'd' || str[0] == 'f' || str[0] == 'g' || str[0] == 'h' || str[0] == 'j' || str[0] == 'k' || str[0] == 'l' || str[0] == 'm' || str[0] == 'n' || str[0] == 'p' || str[0] == 'q' || str[0] == 'r' || str[0] == 's' || str[0] == 't' || str[0] == 'v' || str[0] == 'w' || str[0] == 'x' || str[0] == 'z')
            consonants_iter++;
        else
            other_iter++;
    }
    cout << vowel_iter << " words beginning with vowels\n";
    cout << consonants_iter << " words begining with consonants\n";
    cout << other_iter << " others\n";

    cout << "\nProgram terminated.\n";
    return 0;
}
