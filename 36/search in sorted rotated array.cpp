#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr, int s, int e)
{
    if (s == e)
    {
        return s;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] >= arr[0])
    {
        return findPivot(arr, mid + 1, e);
    }
    else
    {
        return findPivot(arr, s, mid);
    }
}

int search(vector<int> arr, int key, int s, int e)
{
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return search(arr, key, mid + 1, e);
    }
    else
    {
        return search(arr, key, s, mid - 1);
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

    int key;
    cout << "Enter number to search : ";
    cin >> key;

    int pivot = findPivot(arr, 0, n - 1);
    int ans;

    if (key >= arr[0])
    {
        ans = search(arr, key, 0, pivot - 1);
    }
    else
    {
        ans = search(arr, key, pivot, n - 1);
    }
    cout << key << " is at index " << ans << endl;

    return 0;
}
