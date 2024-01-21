#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    if (n == 1 || n == 0)
    {
        return;
    }

    bool check = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            check = true;
        }
    }

    if (check)
    {
        bubbleSort(arr, n - 1);
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

    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
