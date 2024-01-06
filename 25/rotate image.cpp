/*approach : get transport of matrix and reverse columns
write on book and you'll understand what im talking about*/

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // get transport of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // swapping columns till half
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(matrix[j][i], matrix[j][n - i - 1]);
        }
    }
}

int main()
{
    int n;
    cout << "Enter dimension of square matrix : ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at row " << i + 1 << " and column " << j + 1 << " : ";
            cin >> arr[i][j];
        }
    }

    rotate(arr);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
