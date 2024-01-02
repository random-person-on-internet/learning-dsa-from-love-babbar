#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 3 => " << binary_search(v.begin(), v.end(), 3) << endl;
    cout << "Finding 6 => " << binary_search(v.begin(), v.end(), 6) << endl;

    // to get iterator of that element
    cout << "Lower bound => " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper bound => " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    // some other functions:

    int a = 3;
    int b = 5;

    cout << "max = " << max(a, b) << endl;
    cout << "min = " << min(a, b) << endl;

    swap(a, b);

    cout << "a = " << a << ", b = " << b << endl;

    string name = "Ved";
    reverse(name.begin(), name.end());
    cout << name << endl;

    // rotate:

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "Vector after rotating : " << endl;
    for (int i : v)
    {
        cout << i << endl;
    }

    // sort:

    sort(v.begin(), v.end());
    cout << "After sorting : " << endl;
    for (int i : v)
    {
        cout << i << endl;
    }

    return 0;
}
