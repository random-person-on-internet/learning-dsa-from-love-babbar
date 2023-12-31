#include <iostream>
using namespace std;

int main()
{
    int command;

    cout << "1) Addition\n2) Subtraction\n3) Multiplication\n4) Division" << endl;

    cout << "Enter number according to requirement : ";
    cin >> command;

    int n1, n2;

    if (command > 4 || command < 1)
    {
        cout << "Invalid command...Exiting...";
        return 0;
    }

    cout << "Enter number one : ";
    cin >> n1;
    cout << "Enter number two : ";
    cin >> n2;

    switch (command)
    {
    case 1:
        cout << n1 << " + " << n2 << " = " << n1 + n2;
        break;
    case 2:
        cout << n1 << " - " << n2 << " = " << n1 - n2;
        break;
    case 3:
        cout << n1 << " X " << n2 << " = " << n1 * n2;
        break;
    case 4:
        cout << n1 << " / " << n2 << " = " << n1 / n2 << " with remainder " << n1 % n2;
        break;

    default:
        break;
    }

    return 0;
}
