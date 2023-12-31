#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows : ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << "  ";
        }
        int n = 0;
        for (int j = 0; j <= i; j++)
        {
            n++;
            cout << n << " ";
        }
        n--;
        while (n > 0)
        {
            cout << n << " ";
            n--;
        }
        cout << endl;
    }

    return 0;
}
