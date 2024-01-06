// to learn some new string functions

#include <iostream>
#include <string>
using namespace std;

string removeOccurences(string s, string ss)
{
    while (s.length() != 0 && s.find(ss) < s.length())
    {
        s.erase(s.find(ss), ss.length());
    }
    return s;
}

int main()
{
    cout << "Enter main string : ";
    string s;
    getline(cin, s);

    cout << "Enter sub string : ";
    string ss;
    getline(cin, ss);

    string ans = removeOccurences(s, ss);
    cout << ans;

    return 0;
}
