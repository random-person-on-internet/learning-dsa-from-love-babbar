#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    if (s == e)
    {
        return s;
    }

    if (arr[mid] >= arr[0])
    {
        return pivot(arr, mid + 1, e);
    }
    else
    {
        return pivot(arr, s, mid);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int ans = pivot(arr, 0, n - 1);

    cout << arr[ans];

    return 0;
}
