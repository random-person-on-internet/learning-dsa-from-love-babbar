#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    else if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " : ";
        cin >> arr[i];
    }

    cout << "Enter number to search : ";
    int key;
    cin >> key;

    bool ans = binarySearch(arr, 0, n - 1, key);
    cout << ans;

    delete[] arr;

    return 0;
}
