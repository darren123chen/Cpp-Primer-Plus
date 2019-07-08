#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo (student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n) {
     int i = 0;
     for (i = 0; i < n; i++) {
         cout << "Please, enter student #" << i + 1 << " data: ";
         cout << "\nName: ";
         cin.getline(pa[i].fullname, SLEN);
         if (pa[i].fullname[0] == ' ' || pa[i].fullname[0] == '\0')
             break;
         cout << "Hobby: ";
         cin.getline(pa[i].hobby, SLEN);
         cout << "OOP level (integer value): ";
         while (!(cin >> pa[i].ooplevel)) {
              cin.clear();
              while (cin.get() != '\n')
                  continue;
              cout << "Please enter a number: ";
         }
         cin.get();
     }
     return i;
}

void display1(student st) {
     cout << "\ndisplay1 func output: \n";
     cout << "Student " << st.fullname << endl;
     cout << "Hobby: " << st.hobby << endl;
     cout << "OOP level: " << st.ooplevel << endl;
}

void display2(const student * ps) {
    cout << "\ndisplay2 func output: \n";
    cout << "Student " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "OOP level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\ndisplay3 func output: \n";
        cout << "Student " << pa[i].fullname <<endl;
        cout << "HHobby: " << pa[i].hobby << endl;
        cout << "OOP level: " << pa[i].ooplevel << endl;
    }
}
