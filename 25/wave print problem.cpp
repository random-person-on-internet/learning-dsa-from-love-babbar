/* print like a wave, for eg:
1   2   3
4   5   6
7   8   9

print: 1,4,7, 8,5,2, 3,6,9

approach : if column index is even => go top to bottumn
if add => fo bottumn to top*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int rows, int columns)
{
    vector<int> ans;

    for (int i = 0; i < columns; i++)
    {
        if (i % 2 == 0)
        {
            int k = 0;
            while (k < rows)
            {
                ans.push_back(arr[k++][i]);
            }
        }
        else
        {
            int k = rows - 1;
            while (k >= 0)
            {
                ans.push_back(arr[k--][i]);
            }
        }
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

    vector<int> ans = wavePrint(arr, m, n);

    for (int i : ans)
    {
        cout << i << "\t";
    }

    return 0;
}
