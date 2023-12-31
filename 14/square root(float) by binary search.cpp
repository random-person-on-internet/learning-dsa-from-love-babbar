#include <iostream>
using namespace std;

float squareRoot(int n)
{
    int s = 1, e = n / 2;
    int wholeNum;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid * mid > n)
        {
            e = mid - 1;
        }
        else if ((mid * mid <= n) && ((mid + 1) * (mid + 1) > n))
        {
            wholeNum = mid;
            break;
        }
        else
        {
            s = mid + 1;
        }
    }

    float i = wholeNum;

    while (i * i < n)
    {
        i += .1;
    }
    i -= .1;
    while (i * i < n)
    {
        i += .01;
    }
    i -= .01;
    while (i * i < n)
    {
        i += .001;
    }
    i -= .001;

    return i;
}

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    float ans = squareRoot(n);

    cout << "Square root of " << n << " is " << ans;

    return 0;
}
