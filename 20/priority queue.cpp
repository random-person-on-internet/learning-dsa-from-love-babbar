// first element = always greatest

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxh;

    // min heap
    priority_queue<int, vector<int>, greater<int>> minh;

    maxh.push(1);
    maxh.push(3);
    maxh.push(2);
    maxh.push(0);

    // for (int i = 0; i < maxh.size(); i++)
    // {
    //     cout << i << endl;
    // }
    // output = 0,1,2,3

    int temp = maxh.size();

    for (int i = 0; i < temp; i++)
    {
        cout << maxh.top() << ", size = " << maxh.size() << endl;
        maxh.pop();
    }

    cout << "=======================" << endl;

    minh.push(1);
    minh.push(3);
    minh.push(2);
    minh.push(0);

    temp = minh.size();

    for (int i = 0; i < temp; i++)
    {
        cout << minh.top() << ", size = " << minh.size() << endl;
        minh.pop();
    }

    cout << "khali hei kya bhai? " << minh.empty() << endl;

    return 0;
}
