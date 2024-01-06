#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    vector<bool> prime(n, true);
    if (prime.size() < 3)
    {
        return false;
    }

    int cnt = 1;

    for (int i = 3; i < n; i += 2)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = i * 3; j < n; j += i + i)
            {
                prime[j] = false;
            }
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
