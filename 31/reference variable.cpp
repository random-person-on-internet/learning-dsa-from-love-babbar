/* like u have different names at school and home, its multiple names for same variable

Why do we need it?
values dont change when we pass by value...*/

#include <iostream>
using namespace std;

void update(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}

int main()
{
    // int i = 5;
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;

    int n = 5;
    cout << "Before : " << n << endl;
    update(n);
    cout << "After update : " << n << endl;
    update2(n);
    cout << "After update 2 : " << n << endl;

    return 0;
}
