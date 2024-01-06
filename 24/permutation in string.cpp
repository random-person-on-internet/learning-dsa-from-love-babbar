// using SLIDING WINDOW METHOD

#include <iostream>
#include <string>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

bool checkForPermutation(string s1, string s2)
{
    // character count array
    int count[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i] - 'a']++;
    }

    // traveersing using window of size s1.length()

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // running for first window
    while (i < windowSize && i < s2.length())
    {
        count2[s2[i] - 'a']++;
        i++;
    }

    if (checkEqual(count, count2))
    {
        return true;
    }
    // aage process kro
    while (i < s2.length())
    {
        // new character gets added to array
        // previous one needs to get removed

        count2[s2[i] - 'a']++;
        count2[s2[i - windowSize] - 'a']--;

        if (checkEqual(count, count2))
        {
            return true;
        }
        i++;
    }
    return false;
}

int main()
{
    string s1, s2;
    cout << "Enter string 1 : ";
    getline(cin, s1);

    cout << "Enter string 2 : ";
    getline(cin, s2);

    bool check = checkForPermutation(s1, s2);
    cout << check;

    return 0;
}
