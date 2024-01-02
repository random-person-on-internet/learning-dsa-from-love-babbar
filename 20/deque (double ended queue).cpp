/* u can push-pop from both ends
-> is dynamically allocated
-> data is NOT stored in contiginous memory locations*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }

    d.pop_back();
    cout << endl;
    for (int i : d)
    {
        cout << i << " " << endl;
    }

    d.push_back(1);
    d.push_front(3);

    cout << "First element = " << d.at(1) << endl;

    // to erase u need to give a range
    cout << d.size() << endl;
    d.erase(d.begin(), d.end() - 1);
    cout << d.size() << endl;

    return 0;
}
