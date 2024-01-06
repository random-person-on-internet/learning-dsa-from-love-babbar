#include <iostream>
#include <string>
using namespace std;

int compress(string &s)
{
    int i = 0;
    int ansIndex = 0;

    while (i < s.size())
    {
        int j = i + 1;
        while (j < s.size() && s[i] == s[j])
        {
            j++;
        }

        // an ya toh vector pura traverse kr diya
        // ya feer different char encounter kiya

        // store old char
        s[ansIndex++] = s[i];
        int count = j - i;
        if (count > 1)
        {
            // convert counting into single digit and save
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                s[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{
    string s;
    cout << "Enter string : ";
    getline(cin, s);

    int ans = compress(s);
    cout << ans;

    return 0;
}
