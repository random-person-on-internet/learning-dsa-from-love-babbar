#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    int ans = 0, place_value = 1;

    while (n != 0)
    {
        int bit = n & 1;
        ans = static_cast<int>(bit + pow(10, place_value)) + ans;
        n = n >> 1;
        place_value++;
    }

    cout << ans;

    return 0;
}
