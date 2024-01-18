#include <iostream>
using namespace std;

int powerOf2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2 * powerOf2(n - 1);
    }
}

int main()
{
    int p;
    cout << "Enter power : ";
    cin >> p;

    int ans = powerOf2(p);
    cout << ans;

    return 0;
}
