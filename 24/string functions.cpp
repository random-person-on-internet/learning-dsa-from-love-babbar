#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void rev(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char name[3];
    cout << "Enter name : ";
    cin >> name;
    cout << getLength(name) << endl;
    char og[3] = {'v', 'e', 'd'};
    rev(name, 3);
    cout << name << endl;

    if (og == name)
    {
        cout << "is a palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }

    return 0;
}
