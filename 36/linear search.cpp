#include <iostream>
using namespace std;

bool linearSearch(int *arr, int n, int key)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, n - 1, key);
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

    int key;
    cout << "Enter number to search : ";
    cin >> key;

    bool ans = linearSearch(arr, n, key);
    cout << ans;

    delete[] arr;

    return 0;
}
