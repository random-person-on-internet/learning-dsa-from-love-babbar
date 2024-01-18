#include <iostream>
using namespace std;

void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << endl;
        counting(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    counting(n);

    return 0;
}
