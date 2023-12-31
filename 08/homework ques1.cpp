#include <iostream>
using namespace std;

int main()
{
    int money;

    cout << "Enter amount : ";
    cin >> money;

    int hundreds, fifties, twenties, ones;
    hundreds = money / 100;
    money %= 100;
    fifties = money / 50;
    money %= 50;
    twenties = money / 20;
    money %= 20;
    ones = money;

    cout << hundreds << " 100s, " << fifties << " 50s, " << twenties << " 20s, and " << ones << " 1s";

    return 0;
}
