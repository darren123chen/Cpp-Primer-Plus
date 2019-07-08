#include <iostream>
void foo1 ();
void foo2 ();
int main ()
{
    using namespace std;
    foo1 ();
    foo1 ();
    foo2 ();
    foo2 ();
    return 0;
}

void foo1 ()
{
    using namespace std;
     cout << "Three blind mice" << endl;
}

void foo2 ()
{
    using namespace std;
     cout << "See how they run" << endl;
}
