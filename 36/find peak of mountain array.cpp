#include <iostream>
#include <vector>
using namespace std;

int peakOfMountainArray(vector<int> arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
    {
        return mid;
    }
    else if (arr[mid] < arr[mid + 1])
    {
        return peakOfMountainArray(arr, mid + 1, e);
    }
    else if (arr[mid] > arr[mid + 1])
    {
        return peakOfMountainArray(arr, s, mid - 1);
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

    int ans = peakOfMountainArray(arr, 0, n - 1);
    cout << arr[ans] << endl;

    return 0;
}
