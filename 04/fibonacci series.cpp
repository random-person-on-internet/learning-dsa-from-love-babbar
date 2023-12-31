#include <iostream>
using namespace std;

int main()
{
    int first = 0, second = 0, third = 1;
    int n;

    cout << "Enter number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << second << endl;
        first = second;
        int x = third;
        third += second;
        second = x;
    }

    return 0;
}
