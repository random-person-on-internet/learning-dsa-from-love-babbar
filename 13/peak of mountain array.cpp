#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if ((arr[mid] > arr[mid + 1]) && (arr[mid] > arr[mid - 1]))
        {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
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
        cout << "Enter element at index : " << i << " : ";
        int temp;
        cin >> temp;

        arr.push_back(temp);
    }

    int result = findPeak(arr);

    cout << "The peak is : " << arr[result];

    return 0;
}
