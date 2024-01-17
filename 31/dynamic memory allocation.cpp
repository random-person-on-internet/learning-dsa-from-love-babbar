// memory from stack = static memory
// memory from heap = dynamic memory

#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    // var size array
    int *arr = new int(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "Answer is " << ans << endl;

    // release memory
    delete[] arr;

    return 0;
}
