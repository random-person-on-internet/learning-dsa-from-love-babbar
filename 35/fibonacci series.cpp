/*every number n is obtained by n-1 and n-2*/

#include <iostream>
using namespace std;

int fibonacciSeries(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int ans = fibonacciSeries(n);
    cout << ans;

    return 0;
}
