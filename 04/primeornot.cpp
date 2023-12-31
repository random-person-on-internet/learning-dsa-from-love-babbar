#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    int prime = true;

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime == true)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Not a prime number";
    }

    return 0;
}
