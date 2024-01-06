#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows : ";
    cin >> m;
    cout << "Enter number of columns : ";
    cin >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at row " << i + 1 << " and column " << j + 1 << " : ";
            cin >> arr[i][j];
        }
    }

    int sum[m] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i] += arr[i][j];
        }
    }

    int maxSum = sum[0];
    int maxIndex = 0;

    for (int i = 0; i < m; i++)
    {
        if (sum[maxIndex] < sum[i])
        {
            maxIndex = i;
            maxSum = sum[i];
        }
    }

    cout << "Maximum sum = " << maxSum << endl;
    cout << "At row number " << maxIndex + 1 << endl;

    return 0;
}
