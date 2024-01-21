#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    vector<int> arr1;
    vector<int> arr2;

    for (int i = s; i <= mid; i++)
    {
        arr1.push_back(arr[i]);
    }
    for (int i = mid + 1; i <= e; i++)
    {
        arr2.push_back(arr[i]);
    }

    int index1 = 0, index2 = 0, mainIndex = s;

    while (index1 < arr1.size() && index2 < arr2.size())
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainIndex++] = arr1[index1++];
        }
        else if (arr1[index1] > arr2[index2])
        {
            arr[mainIndex++] = arr2[index2++];
        }
        else
        {
            arr[mainIndex++] = arr1[index1++];
            arr[mainIndex++] = arr2[index2++];
        }
    }

    while (index1 < arr1.size())
    {
        arr[mainIndex++] = arr1[index1++];
    }
    while (index2 < arr2.size())
    {
        arr[mainIndex++] = arr2[index2++];
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s == e)
    {
        return;
    }
    if (s + 1 == e)
    {
        if (arr[s] > arr[e])
        {
            swap(arr[s], arr[e]);
        }
        return;
    }
    else
    {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, e);
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

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
