/*makes new vector each time with DOUBLE length, copies values and dumps old one

in short -> arrays ka beta*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1);
    //=> size = 5, all elements initialize at 1

    cout << v.capacity() << endl;
    // size = elements in it, capacity = limit

    v.push_back(12);
    cout << v.capacity() << endl;
    v.push_back(14);
    cout << v.capacity() << endl;
    v.push_back(16);
    cout << "cap before clearing is = " << v.capacity() << endl;
    cout << "size before clearing is = " << v.size() << endl;

    // has front and back functions like arrays -> useless
    // it has a pop back func - opp. of push back

    v.clear(); // capacity doesn't change after clear()
    cout << "cap after clearing is = " << v.capacity() << endl;
    cout << "size after clearing is = " << v.size() << endl;

    // print a
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}
