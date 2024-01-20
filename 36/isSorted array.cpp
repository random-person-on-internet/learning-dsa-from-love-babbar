#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, n - 1);
    }
}

int main()
{
    cout << "Enter number of elements : ";
    int n;
    cin >> n;

    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> arr[i];
    }

    bool ans = isSorted(arr, n);
    cout << ans;

    delete[] arr;
    return 0;
}
