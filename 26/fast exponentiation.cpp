// traditional for pow(a,c) => time complexity = O(b)
// by this method it becomes O(log b)

#include <iostream>
using namespace std;

int fastExp(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // if b is odd:
            ans *= a;
        }
        a *= a;
        b = b >> 1;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter base number : ";
    cin >> a;
    cout << "Enter power : ";
    cin >> b;

    int ans = fastExp(a, b);
    cout << ans;

    return 0;
}
