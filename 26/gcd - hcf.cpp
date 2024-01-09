// gdc and hcf are same
/*we will use euclid theorem:
gcd(a,b) = gcd(a-b,b) => gcd(a%b,b)
do this till one element becomes 0
eg: gcd(72,24) => answer is 24 as we already know

gcd(72,24) = gcd(48,24) = gcd(0,24)
keep subtracting larger number from smaller number

another formula to note=>
gcd(a,b) X lcm(a,b) = a X b*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    // return b alsp works as both are same before one becomes 0
    return a;
}

int main()
{
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    int ans = gcd(a, b);

    cout << "gcd(" << a << "," << b << ") = " << ans;

    return 0;
}
