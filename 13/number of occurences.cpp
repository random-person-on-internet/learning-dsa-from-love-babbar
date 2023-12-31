#include <iostream>
#include <vector>
using namespace std;

int totalNoOfOccurence(vector<int> &arr, int key, int n)
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

    // pair<int, int> firstAndLastOccurences;
    // firstAndLastOccurences.first = fo;
    // firstAndLastOccurences.second = lo;

    int ans = lastOcc - firstOcc + 1;
    if (lastOcc == -1 & firstOcc == -1)
    {
        return -1;
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int key;

    cout << "Enter number to find its occurences : ";
    cin >> key;

    int result = totalNoOfOccurence(arr, key, n);

    if (result == -1)
    {
        cout << key << " doesn't exist in array";
    }
    else
    {
        cout << key << " is present " << result << " times!";
    }

    return 0;
}
