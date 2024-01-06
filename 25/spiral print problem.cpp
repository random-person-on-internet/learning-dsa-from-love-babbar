/* SPIRAL PRINT PROBLRM :
eg:
1   2   3
4   5   6
7   8   9

print : 1,2,3,6,9,8,7,4,5,6

approach :
print starting row
print ending column
print ending row
print starting column
print second row(now ur starting row)...and so on

just remove duplicates*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int column = matrix[0].size();

    int count = 0;
    int total = row * column;

    int startingRow = 0;
    int startingColumn = 0;
    int endingRow = row - 1;
    int endingColumn = column - 1;

    while (count < total)
    {
        // print starting row
        // it basically prints from start col to end col
        // read i as index for better understanding
        for (int i = startingColumn; i <= endingColumn; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // print ending column
        // from NEW starting row to ending row
        for (int i = startingRow; i <= endingRow; i++)
        {
            ans.push_back(matrix[i][endingColumn]);
            count++;
        }
        endingColumn--;

        // print ending row
        // from NEW ending col to starting col
        for (int i = endingColumn; i >= startingColumn; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // print starting col
        for (int i = endingRow; i >= startingRow; i--)
        {
            ans.push_back(matrix[i][startingColumn]);
            count++;
        }
        startingColumn++;
    }
    return ans;
}

int main()
{
    cout << "Enter number of rows : ";
    int m;
    cin >> m;
    cout << "Enter number of columns : ";
    int n;
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

    vector<int> ans = spiralOrder(arr);

    for (int i : ans)
    {
        cout << i << ", ";
    }

    return 0;
}
