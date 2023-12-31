#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows : ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << j << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "* * ";
        }

        for (int j = rows - i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
