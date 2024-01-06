/*Number of prime numbers uptil n*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimes(int n)
{
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    cout << "Enter number : ";
    int n;
    cin >> n;

    int ans = countPrimes(n);
    cout << ans;

    return 0;
}
