// last in first out concept - like stack of plates

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Ved");
    s.push("Ankurbhai");
    s.push("Lakkad");

    cout << "Top element : " << s.top() << endl;
    // output = Lakkad

    s.pop();
    cout << "Top element : " << s.top() << endl;
    // output = Ankurbhai

    bool check = s.empty();
    cout << check;

    return 0;
}
