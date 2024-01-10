#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << n << endl;

    // address of operator - &
    cout << "address of n = " << &n << endl;
    // int ptr = &n; => will show error
    int *ptr = &n;
    // ptr is a pointer for int data type
    cout << "value of ptr = " << ptr << endl;
    cout << "value at ptr = " << *ptr << endl;
    cout << "address of ptr = " << &ptr << endl;
    cout << "size of n = " << sizeof(n) << endl;
    cout << "size of ptr = " << sizeof(ptr) << endl;

    return 0;
}
