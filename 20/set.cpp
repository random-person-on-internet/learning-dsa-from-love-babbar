// only unique elements stored

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(0);
    s.insert(4);
    s.insert(3);
    s.insert(5);

    for (int i : s)
    {
        cout << i << endl;
    }
    cout << "size = " << s.size() << endl;

    set<int>::iterator it = s.begin();

    s.erase(it);

    for (int i : s)
    {
        cout << i << endl;
    }
    cout << "size = " << s.size() << endl;

    // count returns bool, find returns index
    cout << "Is 5  present?" << s.count(5) << endl;
    set<int>::iterator itr = s.find(5);
    cout << "Value at itr = " << *itr << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
