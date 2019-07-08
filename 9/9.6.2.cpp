#include <iostream>
#include <string>
using namespace std;
void strcount(const string & str);
int main()
{
    string input;

    cout << "Enter a line:\n";
    while(getline(cin, input) && input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit): \n";
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string & str)
{
     static int total = 0;

     cout << "\"" << str << "\" contains ";
     cout << str.length() << " characters\n";
     total += str.length();
     cout << total << " characters total\n";
}
