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

    int ans = 0;

    // XOR all array elements
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }

    // XOR from 1 till n-1 as they are the elements
    for (int i = 1; i < n; i++)
    {
        ans ^= i;
    }

    cout << "Duplicate element is " << ans;

    return 0;
}
