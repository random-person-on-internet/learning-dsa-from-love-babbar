#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(2);
    l.push_front(1);
    // pop_front and back same as rest

    for (int i : l)
    {
        cout << i;
    }

    list<int> l2(5, 100);
    for (int i : l2)
    {
        cout << i << endl;
    }
    cout << l2.size() << endl;

    return 0;
}
