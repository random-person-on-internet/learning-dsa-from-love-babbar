#include <iostream>
#include <string>
using namespace std;

void sayDigits(int n)
{
    if (n == 0)
    {
        return;
    }
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int digit = n % 10;
    // cout << arr[digit] << " ";
    // if u add it before rec call it speaks in reverse lol
    sayDigits(n / 10);
    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    sayDigits(n);

    return 0;
}
