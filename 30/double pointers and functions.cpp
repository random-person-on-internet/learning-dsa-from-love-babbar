#include <iostream>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    // does no change
    // *p = *p + 1;
    // does change!!
    // **p = **p + 1;
    // yes it changes!
}

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "before : " << endl;
    cout << "i = " << i << endl;
    cout << "ptr = " << ptr << endl;
    cout << "ptr2 = " << ptr2 << endl;

    update(ptr2);

    cout << "after : " << endl;
    cout << "i = " << i << endl;
    cout << "ptr = " << ptr << endl;
    cout << "ptr2 = " << ptr2 << endl;

    return 0;
}
