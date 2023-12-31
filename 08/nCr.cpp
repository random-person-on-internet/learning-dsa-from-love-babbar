#include <iostream>
using namespace std;

int fact(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return x * fact(x - 1);
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * (fact(n - r)));
}

int main()
{
    int n, r;

    cout << "Enter value of n : ";
    cin >> n;

    cout << "Enter value of r : ";
    cin >> r;

    cout << "nCr = " << nCr(n, r);

    return 0;
}
