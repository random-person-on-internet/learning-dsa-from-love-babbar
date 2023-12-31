#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> triplet_sum(vector<int> array, int s)
{
    vector<vector<int>> ans;

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            for (int k = j + 1; k < array.size(); k++)
            {
                if ((array[i] + array[j] + array[k]) == s)
                {
                    vector<int> temp;
                    cout << array[i] << "\t" << array[j] << "\t" << array[k] << "\n";

                    temp.push_back(array[i]);
                    temp.push_back(array[j]);
                    temp.push_back(array[k]);
                    ans.push_back(temp);
                    break;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter length : ";
    cin >> n;

    vector<int> arr;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << " : ";
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Enter sum : ";
    int sum;
    cin >> sum;

    triplet_sum(arr, sum);

    return 0;
}
