#include <iostream>
using namespace std;

int facts(int n, int m)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans % m * i) % m;
    }
    return ans;
}

int main()
{
    int n, m;

    cout << "Enter number : ";
    cin >> n;
    cout << "Enter value of m : ";
    cin >> m;

    int ans = facts(n, m);
    cout << n << "! % " << m << " = " << ans;

    return 0;
}
