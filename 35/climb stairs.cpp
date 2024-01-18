#include <iostream>
using namespace std;

int countDistinctWayToClimbStair(int n)
{
    // u came to nth stair from either n-1 or n-2
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        countDistinctWayToClimbStair(n - 1) + countDistinctWayToClimbStair(n - 1);
    }
}

int main()
{
    int stairs;
    cout << "Enter number of stairs : ";
    cin >> stairs;

    int ans = countDistinctWayToClimbStair(stairs);
    cout << ans;

    return 0;
}
