// we will use the % logic to save more memory

#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &arr, int k)
{
    vector<int> temp(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        temp[(i + k) % arr.size()] = arr[i];
    }
    // copy to main array
    arr = temp;
}

int main()
{
    cout << "Enter number of elements : ";
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at vector " << i << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Enter value of k : ";
    int k;
    cin >> k;

    rotateArray(arr, k);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
