#include <iostream>
using namespace std;

bool is_even(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    // if(a&1){return false};
    return false;
}

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    if (is_even(n))
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }

    return 0;
}
