#include <iostream>
using namespace std;

int main()
{
    // to change value use *
    int i = 3;
    int *t = &i;
    cout << (*t)++ << endl;
    cout << *t << endl;

    // this gives next address
    // t = t + 1;
    // cout << t;

    return 0;
}
