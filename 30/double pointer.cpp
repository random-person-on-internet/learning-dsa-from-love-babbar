#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "address of i = " << &i << endl;
    cout << "value of ptr = " << ptr << endl;
    cout << "address of ptr = " << &ptr << endl;
    cout << "value of ptr2 = " << ptr2 << endl;

    return 0;
}
