#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        // yaha pohche means arr[left]== 1 aur vice versa
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int n;

    cout << "Enter length : ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sortArray(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
