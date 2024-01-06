#include <iostream>
#include <string>
using namespace std;

bool isValidChar(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

string reverseString(string s)
{
    string ans = s;
    int st = 0;
    int e = s.length() - 1;

    while (st < e)
    {
        swap(ans[st++], ans[e--]);
    }
    return ans;
}

bool isPalindrome(string s)
{
    // faltu char htane hei
    int i = 0;

    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (isValidChar(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // lower case
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    // rev
    string rev = reverseString(temp);

    // check
    if (rev == temp)
    {
        return true;
    }
    return false;
}

int main()
{
    string s;

    cout << "Enter string : ";
    cin >> s;

    if (isPalindrome(s))
    {
        cout << "it is a palindrome";
    }
    else
    {
        cout << "it's not a palindrome";
    }

    return 0;
}
