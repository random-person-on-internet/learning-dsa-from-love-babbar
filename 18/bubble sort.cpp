#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool testIfReady = true; // to optimize the code
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                testIfReady = false;
            }
        }

        if (testIfReady)
        {
            break;
        }
    }
}

int main()
{
    cout << "Enter number of elements : ";
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    bubbleSort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
