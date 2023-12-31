#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}

int main()
{
    int a, b;

    cout << "Enter number : ";
    cin >> a;

    cout << "Enter power : ";
    cin >> b;

    cout << power(a, b);

    return 0;
}
