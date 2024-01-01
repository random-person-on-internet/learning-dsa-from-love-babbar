#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int main()
{
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    selectionSort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
