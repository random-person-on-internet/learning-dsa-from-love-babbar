#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    if (n == arr.size())
    {
        return;
    }
    int minIndex = n;
    for (int i = n; i < arr.size(); i++)
    {
        if (arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
    }
    if (n != minIndex)
    {
        swap(arr[n], arr[minIndex]);
    }
    return selectionSort(arr, n + 1);
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

    selectionSort(arr, 0);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
