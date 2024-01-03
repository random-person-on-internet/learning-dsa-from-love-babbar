#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int s = m + 1;
    int e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    cout << "Enter number of elements : ";
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Enter index to reverse it from : ";
    int m;
    cin >> m;

    reverseArray(arr, m);

    // print output:
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
