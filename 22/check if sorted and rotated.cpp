#include <iostream>
#include <vector>
using namespace std;

bool rotatedAndSorted(vector<int> arr)
{
    int ascendingCount = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            ascendingCount++;
        }
    }

    if (arr[arr.size() - 1] > arr[0])
    {
        ascendingCount++;
    }

    return ascendingCount < 3;
}

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    bool check = rotatedAndSorted(arr);
    cout << check;

    return 0;
}
