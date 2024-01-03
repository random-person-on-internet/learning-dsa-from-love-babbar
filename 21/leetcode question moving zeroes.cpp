#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> &nums)
{

    // loop to iterate through whole arr
    for (int i = 0; i < nums.size() - 1; i++)
    {

        bool didntSwap = true;

        // to bring zeroes to end one by one
        for (int j = nums.size() - 1; j > i; j--)
        {
            if (nums[j - 1] == 0)
            {
                swap(nums[j], nums[j - 1]);
                didntSwap = false;
            }
        }
        if (didntSwap)
        {
            break;
        }
    }
}

int main()
{
    // u get the rest,
    // try to make more optimised code using 2 pointer approach

    return 0;
}
