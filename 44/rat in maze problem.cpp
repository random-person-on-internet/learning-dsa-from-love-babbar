/*example :
1   0   0   0
1   1   0   1
1   1   0   0
0   1   1   1

1 = allowed(open path)
0 = not allowed(closed path)

first standing at 0,0
destination = n-1,n-1 -> here 3,3
output = give all paths*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isPossibe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    return false;
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string path)
{
    // base cases
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // 4 choices = D,L,R,U

    // down
    int newx = x + 1;
    int newy = y;
    if (isPossibe(newx, newy, n, visited, m))
    {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // left
    int newx = x;
    int newy = y - 1;
    if (isPossibe(newx, newy, n, visited, m))
    {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // right
    int newx = x;
    int newy = y + 1;
    if (isPossibe(newx, newy, n, visited, m))
    {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // up
    int newx = x - 1;
    int newy = y;
    if (isPossibe(newx, newy, n, visited, m))
    {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // for backtracking
    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    int srcx = 0;
    int srcy = 0;

    // initialised visited array as 0
    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";

    solve(m, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    // useless

    return 0;
}
