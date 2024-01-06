#include <iostream>
#include <string>
using namespace std;

void replaceSpaces(string &s)
{
    int spaces = 0;

    for (char i : s)
    {
        if (i == ' ')
        {
            spaces++;
        }
    }
    int oldLength = s.length();
    int newLength = s.length() + (spaces * 2);

    // new function to learn
    s.resize(newLength);

    for (int i = oldLength - 1, j = newLength - 1; i >= 0; i--, j--)
    {
        if (s[i] == ' ')
        {
            s[j--] = '0';
            s[j--] = '4';
            s[j] = '@';
        }
        else
        {
            s[j] = s[i];
        }
    }
}

int main()
{
    cout << "Enter string : ";
    string s;
    getline(cin, s);
    replaceSpaces(s);
    cout << s;

    return 0;
}
