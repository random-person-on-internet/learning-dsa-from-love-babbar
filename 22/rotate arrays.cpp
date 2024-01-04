#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int k)
{
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (k >= arr.size())
        {
            k = 0;
        }
        ans.push_back(arr[k]);
        k++;
    }

    return ans;
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

    vector<int> ans = rotateArray(arr, k);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
