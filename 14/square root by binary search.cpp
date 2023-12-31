#include <iostream>
using namespace std;

int squareRoot(int n)
{
    int s = 1, e = n / 2;
    // range in which ans lies = search space

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid * mid > n)
        {
            e = mid - 1;
        }
        else if ((mid * mid <= n) && ((mid + 1) * (mid + 1) > n))
        {
            // return n;
            // wtf is wrong with me, fml
            return mid;
        }
        else
        {
            s = mid + 1;
        }
    }
}

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    int ans = squareRoot(n);

    cout << "Square root of " << n << " is " << ans;

    return 0;
}
