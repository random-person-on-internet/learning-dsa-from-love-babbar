#include <iostream>
using namespace std;

int counting(int x)
{
    if (x == 0)
    {
        return 0;
    }
    cout << x << endl;
    return counting(x - 1);
}

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    counting(n);

    return 0;
}
