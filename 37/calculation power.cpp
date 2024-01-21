#include <iostream>
using namespace std;

int exp(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * exp(base, power - 1);
    }
}

int main()
{
    int base;
    cout << "Enter number : ";
    cin >> base;
    int power;
    cout << "Enter power : ";
    cin >> power;

    int ans = exp(base, power);
    cout << ans;

    return 0;
}
