#include <iostream>
using namespace std;

void reverse_array(int array[], int length)
{
    int temp;
    for (int i = 0; i < length / 2; i++)
    {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
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

    reverse_array(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
