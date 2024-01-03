#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int n = arr.size() / 2;
    for (int i = 0; i < n; i++)
    {
        swap(arr[i], arr[arr.size() - i - 1]);
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
        cout << "Enter element " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // print result
    reverseArray(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
