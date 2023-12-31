#include <iostream>
using namespace std;

int main()
{
    int rows, idk = 1;

    cout << "Enter number of rows : " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << idk << " ";
            idk++;
        }
        cout << endl;
    }

    return 0;
}
