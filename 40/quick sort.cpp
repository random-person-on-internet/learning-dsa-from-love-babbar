#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int lessCount = 0;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] < arr[s])
        {
            lessCount++;
        }
    }

    int pivotIndex = s + lessCount;
    swap(arr[s], arr[pivotIndex]);
    int i = s, j = e;

    while (i > j || i < pivotIndex)
    {
        if (arr[i] > arr[pivotIndex] && arr[j] < arr[pivotIndex])
        {
            swap(arr[i++], arr[j--]);
        }
        else if (arr[i] < arr[pivotIndex])
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    quickSort(arr, s, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, e);
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

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
