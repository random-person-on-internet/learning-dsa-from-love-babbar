#include <iostream>
using namespace std;

int getMax(int array[], int size)
{
    int min = array[0], max = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    cout << "Min = " << min << "\nMax = " << max;
    return 0;
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

    getMax(arr, n);

    return 0;
}
