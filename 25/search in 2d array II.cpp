/*it is sorted row wise + column wise, eg:
1   4   7   11  15
2   5   8   12  19
3   6   9   16  22
10  13  14  17  24

if target<15 : last column can be removed
if target>15 : first row can be removed*/

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int column = matrix[0].size();

    int rowIndex = 0;
    int colIndex = column - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        if (matrix[rowIndex][colIndex] == target)
        {
            return true;
        }
        else if (matrix[rowIndex][colIndex] > target)
        {
            colIndex--;
        }
        else
        {
            rowIndex++;
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

    cout << "Enter element to search : ";
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
