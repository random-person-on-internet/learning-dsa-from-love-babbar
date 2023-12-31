#include <iostream>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i < x / 2; i++)
    {
        if (x % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }

    return 0;
}
