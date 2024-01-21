#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int i)
{
    if (i == arr.size())
    {
        return;
    }

    int temp = arr[i];
    int j = i - 1;

    for (; j >= 0; j--)
    {
        if (arr[j] > temp)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j + 1] = temp;

    return insertionSort(arr, i + 1);
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

    insertionSort(arr, 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
