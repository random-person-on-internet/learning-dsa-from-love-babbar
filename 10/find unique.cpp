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

    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }

    cout << "Unique element is : " << ans;

    return 0;
}
