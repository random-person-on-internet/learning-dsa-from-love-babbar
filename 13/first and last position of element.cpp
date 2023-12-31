#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<int, int> firstLastPosition(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int firstOcc = -1;
    int lastOcc = -1;

    // first occurence
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            firstOcc = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        // else
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }

    s = 0;
    e = n - 1; // reset s and e

    // last occurence
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            lastOcc = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        // else
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }

    return make_pair(firstOcc, lastOcc);
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

    cout << "Enter number to search : ";
    int key;
    cin >> key;

    pair<int, int> result = firstLastPosition(arr, n, key);
    cout << result.first << "\t" << result.second;

    return 0;
}
