// imo useful ONLY because of array_name.size() lmao

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    // printing array
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at index 2 : " << a.at(2) << endl;
    cout << "First element : " << a.front() << endl;
    cout << "Last element : " << a.back() << endl;

    return 0;
}
