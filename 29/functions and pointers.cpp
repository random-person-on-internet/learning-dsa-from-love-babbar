#include <iostream>
using namespace std;

void printf(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}

void update(int *p)
{
    *p = *p + 1;
    p = p + 1;
    cout << "inside function : " << p << endl;
}

int main()
{
    int value = 12;
    int *ptr = &value;
    printf(ptr);
    cout << "before : " << ptr << endl;
    cout << "value before : " << *ptr << endl;
    update(ptr);
    cout << "after : " << ptr << endl;
    cout << "value after : " << *ptr << endl;

    return 0;
}
