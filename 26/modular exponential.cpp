// find (x^n)%m

#include <iostream>
using namespace std;

int modularExponentiation(int x, int n, int m)
{
    int result = 1;

    while (n > 0)
    {
        // n&1 => n is odd
        if (n & 1)
        {
            result = (1LL * (result) % m * (x % m)) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        // it divides by 2 in more optimised way
        n = n >> 1;
    }
}

int main()
{
    int x, n, m;

    cin >> x >> n >> m;

    return 0;
}
