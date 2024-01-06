#include <iostream>
#include <string>
using namespace std;

char getMaxOccuringCharacter(string s)
{
    // dont forget to initialise elements with 0
    // ot you'll get some wild results
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            arr[s[i] - 'a']++;
        }
        else
        {
            arr[s[i] - 'A']++;
        }
    }
    int maxi = 0;
    int maxel = arr[0];

    for (int i = 0; i < 26; i++)
    {
        if (maxel < arr[i])
        {
            maxi = i;
            maxel = arr[i];
        }
    }
    char ans = 'a' + maxi;
    return ans;
}

int main()
{
    cout << "Enter the string : ";
    string s;
    getline(cin, s);

    char ans = getMaxOccuringCharacter(s);
    cout << "Maximum occuring character in string [" << s << "] is " << ans;

    return 0;
}
