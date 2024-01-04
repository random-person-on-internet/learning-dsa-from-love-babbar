#include <iostream>
#include <vector>
using namespace std;

void takeArrayInput(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
}

// vector<int> sumOfArrays(vector<int> &arr1, vector<int> &arr2)
// {

//     int m = max(arr1.size(), arr2.size());
//     int n = min(arr1.size(), arr2.size());
//     vector<int> ans;
//     vector<int> longer;

//     if (arr1.size() == m)
//     {
//         longer = arr1;
//     }
//     else
//     {
//         longer = arr2;
//     }
//     int p = 0;
//     for (int i = m - 1; i >= 0; i--)
//     {
//         int temp;
//         if (i >= (m - n))
//         {
//             temp = arr1[i] + arr2[i] + p;
//         }
//         else
//         {
//             temp = longer[i] + p;
//         }
//         ans.push_back(temp % 10);
//         p = temp / 10;
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

void reverse(vector<int> &v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
}

vector<int> findArraySum(vector<int> &a, vector<int> &b)
{
    // first method has some issues so im using other approach
    // solve me defining 3 cases
    int i = a.size() - 1;
    int j = b.size() - 1;
    vector<int> ans;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
    }

    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }

    reverse(ans);
    return ans;
}

int main()
{
    int n1, n2;

    cout << "Enter size of first array : ";
    cin >> n1;
    vector<int> arr1;
    takeArrayInput(arr1, n1);

    cout << "Enter size of second array : ";
    cin >> n2;
    vector<int> arr2;
    takeArrayInput(arr2, n2);

    vector<int> ans = findArraySum(arr1, arr2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
