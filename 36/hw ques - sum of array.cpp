#include <iostream>
using namespace std;

int sumOfArray(int *arr, int n)
{
    if (n == 0)
    {
        return arr[n];
    }
    else
    {
        return arr[n] + sumOfArray(arr, n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter length of array : ";
    cin >> n;

    int *arr = new int(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> arr[i];
    }

    int ans = sumOfArray(arr, n - 1);
    cout << ans;

    delete[] arr;

    return 0;
}
