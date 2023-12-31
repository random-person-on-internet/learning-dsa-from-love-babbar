#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter binary number : ";
    cin >> n;
    int ans = 0, place_value = 0;

    while (n != 0)
    {
        // its integer, not binary so dont use n&1 or right shift
        if (n % 10 == 1)
        {
            ans += pow(2, place_value);
        }
        n /= 10;
        place_value++;
    }

    cout << ans;

    return 0;
}
