/*applying logic:
row of an element = index in linear/column
column of an element = index in linear%column*/

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int column = matrix[0].size();

    int s = 0;
    int e = rows * column - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        int element = matrix[mid / column][mid % column];
        if (element == target)
        {
            return true;
        }
        else if (element < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return false;
}

int main()
{
    int m, n;
    cout << "Enter number of rows : ";
    cin >> m;

    cout << "Enter number of columns : ";
    cin >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at row " << i + 1 << " and column " << j + 1 << " : ";
            cin >> arr[i][j];
        }
    }

    cout << "Enter element you're looking for : ";
    int target;
    cin >> target;

    if (searchMatrix(arr, target))
    {
        cout << "Found!";
    }
    else
    {
        cout << "Not found...";
    }

    return 0;
}
