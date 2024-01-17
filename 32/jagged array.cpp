// it is 2D array with different sizes for rows

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        int temp;
        cout << "Enter length of row " << i + 1 << " : ";
        cin >> temp;
        arr[i] = new int[temp];

        for (int j = 0; j < temp; j++)
        {
            cout << "Enter elem at col " << j + 1 << " : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
