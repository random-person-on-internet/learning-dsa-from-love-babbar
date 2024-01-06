#include <iostream>
using namespace std;

bool isPresent(int arr[3][3], int target)
{
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            if (target == arr[row][column])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at row " << i + 1 << " and column " << j + 1 << " : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Enter element to search : ";
    int target;
    cin >> target;

    if (isPresent(arr, target))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}
