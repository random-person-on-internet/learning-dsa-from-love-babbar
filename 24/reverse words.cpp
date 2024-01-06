#include <iostream>
#include <string>
using namespace std;

void revIT(string &s)
{
    int st = 0, e = s.length() - 1;
    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
}

string reverseWords(string s)
{
    int n = s.length();
    string answer = "";
    string temp = "";

    for (int i = 0; i < n; i++)
    {
        if ((s[i] != ' ') && (s[i] != '\0'))
        {
            temp.push_back(s[i]);
        }
        else if (s[i] == ' ')
        {
            revIT(temp);
            temp.push_back(s[i]);
            answer += temp;
            temp.clear();
        }
        else
        {
            revIT(temp);
            answer += temp;
            temp.clear();
        }
    }
    revIT(temp);
    answer += temp;
    return answer;
}

int main()
{
    string s;

    cout << "Enter string : ";
    getline(cin, s);

    string ans = reverseWords(s);
    cout << ans;

    return 0;
}
