// just like dictionaries in python
// => stored in key-value pairs

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Ved";
    m[2] = "Lakkad";
    m[10] = "Lakkad";
    m.insert({5, "Patel"});

    for (auto i : m)
    {
        cout << i.first << "\t" << i.second << endl;
    }

    cout << "10 present? " << m.count(10) << endl;
    m.erase(10);
    cout << "After erase : " << endl;
    cout << "10 present? " << m.count(10) << endl;

    return 0;
}
