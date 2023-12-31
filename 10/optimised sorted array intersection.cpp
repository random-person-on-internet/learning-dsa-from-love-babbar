#include <iostream>
#include <vector>
using namespace std;

vector<int> find_duplicates(int arr1[], int arr2[], int l1, int l2)
{
    vector<int> ans;
    int i = 0, j = 0;

    while (i < l1 && j < l2)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int m, n;

    cout << "Enter number of elements in array one : ";
    cin >> m;

    int arr1[m];

    for (int i = 0; i < m; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr1[i];
    }

    cout << "Enter number of elements in array two : ";
    cin >> n;

    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr2[i];
    }

    vector<int> ans = find_duplicates(arr1, arr2, m, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
