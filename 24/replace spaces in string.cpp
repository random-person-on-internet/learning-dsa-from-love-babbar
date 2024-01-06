// replace spaces with @40:
// eg: jay shree krishna => jay@40shree@40krishna

#include <iostream>
#include <string>

using namespace std;

string replacingSpaces(string s)
{
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            ans.push_back(s[i]);
        }
        else
        {
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        }
    }
    return ans;
}

using namespace std;

int main()
{
    cout << "Enter string : ";
    string s;
    getline(cin, s);

    string ans = replacingSpaces(s);
    cout << ans;

    return 0;
}
