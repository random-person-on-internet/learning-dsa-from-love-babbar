/*array of element n
there are k painters
1 unit board takes 1 unit time
painters can paint only CONTINUOUS SECTIONS
find minimum time required*/

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int painters, int maxBoards)
{
    int painterCount = 1;
    int boards = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (boards + arr[i] <= maxBoards)
        {
            boards += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > painters || arr[i] > maxBoards)
            {
                return false;
            }
            boards = arr[i];
        }
    }
    return true;
}

int minTime(vector<int> &arr, int painters)
{
    int s = 0;
    int e = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        e += arr[i];
    }

    int ans;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isValid(arr, painters, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter number of blocks : ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number of boards in block " << i + 1 << " : ";
        int temp;
        cin >> temp;

        arr.push_back(temp);
    }

    cout << "Enter number of painters : ";
    int painters;
    cin >> painters;

    int ans = minTime(arr, painters);

    cout << "Minimum unit of time required = " << ans;

    return 0;
}
