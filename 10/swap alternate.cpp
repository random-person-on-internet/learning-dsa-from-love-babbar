#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int m = n;

    if (n % 2 != 0)
    {
        n--;
    }

    int temp;

    for (int i = 0; i < n; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
