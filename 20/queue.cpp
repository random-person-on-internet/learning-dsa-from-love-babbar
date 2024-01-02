// first in first out concept => like a line

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> name;

    name.push("Ved");
    name.push("Lakkad");

    cout << "Checking first element = " << name.front() << endl;
    cout << "Size before poping = " << name.size() << endl;
    name.pop();
    cout << "Checking first element after poping = " << name.front() << endl;
    cout << "Size after poping = " << name.size() << endl;

    return 0;
}
