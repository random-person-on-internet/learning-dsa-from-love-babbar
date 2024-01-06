// note : this soln will exceed time limit

#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    bool check = true;
    while (check == true)
    {
        check = false;
        int k = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s[i + 1])
            {
                i += 2;
                check = true;
            }
            s[k] = s[i];
            k++;
        }
        s.resize(k);
    }

    return s;
}

int main()
{
    string s;
    cout << "Enter string : ";
    getline(cin, s);

    string ans = removeDuplicates(s);
    cout << ans;

    return 0;
}
