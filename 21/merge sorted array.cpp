#include <iostream>
#include <vector>
using namespace std;

void takeArray(vector<int> &arr, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
}

vector<int> mergeSortedArray(vector<int> a1, vector<int> a2)
{
    vector<int> ans;
    int p1 = 0, p2 = 0;
    int n1 = a1.size(), n2 = a2.size();

    while (p1 < n1 && p2 < n2)
    {
        if (a1[p1] < a2[p2])
        {
            ans.push_back(a1[p1]);
            p1++;
        }
        else if (a1[p1] > a2[p2])
        {
            ans.push_back(a2[p2]);
            p2++;
        }
        else
        {
            ans.push_back(a1[p1]);
            ans.push_back(a2[p2]);
            p1++;
            p2++;
        }
    }

    // add remaining elements:
    while (p1 < n1)
    {
        ans.push_back(a1[p1]);
        p1++;
    }
    while (p2 < n2)
    {
        ans.push_back(a2[p2]);
        p2++;
    }

    return ans;
}

int main()
{
    int n1, n2;

    cout << "Enter size of array 1 : ";
    cin >> n1;
    vector<int> arr1;
    takeArray(arr1, n1);

    cout << "Enter size of array 2 : ";
    cin >> n2;
    vector<int> arr2;
    takeArray(arr2, n2);

    // print result

    vector<int> ans = mergeSortedArray(arr1, arr2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
