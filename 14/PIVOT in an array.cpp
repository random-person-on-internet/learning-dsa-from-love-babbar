#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> &arr)
{

    // see 2 lines in graph?
    // only in first line arr[any]>arr[0] is possible

    int s = 0, e = arr.size() - 1;

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
    // return e is also valid
    return s;
}

int main()
{
    // int arr[] = {1, 2, 3, 7, 9};
    // int rotated_arr[] = {7, 9, 1, 2, 3};
    // pivot = 1, index = 2

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

    int ans = pivot(arr);

    cout << "The pivot is " << arr[ans] << " at index " << ans;

    return 0;
}
