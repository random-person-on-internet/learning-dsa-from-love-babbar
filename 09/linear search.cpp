#include <iostream>
using namespace std;

bool isPresent(int array[], int range, int x)
{
    for (int i = 0; i < range; i++)
    {
        if (array[i] == x)
        {
            return true;
        }
    }
    return false;
}

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

    int find;
    cout << "Enter number you want to find : ";
    cin >> find;

    if (isPresent(arr, n, find))
    {
        cout << "It is present in array";
    }
    else
    {
        cout << "It's not present in array";
    }

    return 0;
}
