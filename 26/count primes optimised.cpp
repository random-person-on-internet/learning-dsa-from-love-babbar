/*Sieve of Eratosthenes algorithm
sieveOfEratosthenes(int n)

eg : limit is 40
step 1) think of all as prime numbers
step 2) start with 2
step 3) 2 = prime, for multiples of 2 its false
step 4) pick up next prime number and continue
*/

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    int cnt = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;

            for (int j = i * 2; j < n; j += i)
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
