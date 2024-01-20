#include <iostream>
#include <vector>
using namespace std;

int findPosition(vector<int> arr, int key, int s, int e, bool findFirst)
{
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] < key)
    {
        return findPosition(arr, key, mid + 1, e, findFirst);
    }
    else if (arr[mid] > key)
    {
        return findPosition(arr, key, s, mid - 1, findFirst);
    }
    else
    {
        if (findFirst)
        {
            int next = findPosition(arr, key, s, mid - 1, findFirst);
            return next == -1 ? mid : next;
        }
        else
        {
            int next = findPosition(arr, key, mid + 1, e, findFirst);
            return next == -1 ? mid : next;
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << ": ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Enter number to search: ";
    int key;
    cin >> key;

    int first = findPosition(arr, key, 0, n - 1, true);
    int last = findPosition(arr, key, 0, n - 1, false);
    cout << first << " " << last;

    return 0;
}
