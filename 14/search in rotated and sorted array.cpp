#include <iostream>
#include <vector>
using namespace std;

int findInSortedRotatedArray(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;

    // find PIVOT
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }

    int pivot = e;

    // conditions for limits in binary search algo
    if (key >= arr[0])
    {
        s = 0, e = pivot - 1;
    }
    else
    {
        s = pivot, e = arr.size() - 1;
    }

    // binary search algo
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            return mid;
        }
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
        cout << "Enter number at index " << i << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Enter number to search : ";
    int key;
    cin >> key;

    int ans = findInSortedRotatedArray(arr, key);
    cout << key << " is at index " << ans;

    return 0;
}
