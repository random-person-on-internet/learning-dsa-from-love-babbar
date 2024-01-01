/*length of array = n (position of stall)
number of cows = k
min dist = largest poossible
thus, we need LARGEST POSSIBLE ANS
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int cows, int minDist)
{
    int cowCount = 1;
    int lastPosition = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastPosition >= minDist)
        {
            cowCount++;
            if (cowCount == cows)
            {
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;
}

int maxDistPossible(vector<int> &arr, int cows)
{
    sort(arr.begin(), arr.end());

    int s = 0;
    int min = INT32_MAX;
    int max = INT32_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int e = max - min;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, cows, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number of stalls : ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter position of stall " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int cows;
    cout << "Enter number of cows : ";
    cin >> cows;

    int ans = maxDistPossible(arr, cows);

    cout << "The largest possible dist = " << ans;

    return 0;
}
