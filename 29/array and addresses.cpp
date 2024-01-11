#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    cout << "size : " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[10];
    cout << "Address at first memory block = " << arr << endl;
    cout << "Address at first memory block = " << &arr[0] << endl;
    // both are same lol

    int a[3] = {1, 2, 3};
    cout << "sum is = " << getSum(arr, 3) << endl;

    return 0;
}
