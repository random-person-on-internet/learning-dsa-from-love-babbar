#include <iostream>
#include <string>
using namespace std;

void rev(string &str, int i)
{
    if (i >= str.length() / 2)
    {
        return;
    }
    else
    {
        swap(str[i++], str[str.length() - i - 1]);
        rev(str, i);
    }
}

int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    rev(str, 0);
    cout << str;

    return 0;
}
