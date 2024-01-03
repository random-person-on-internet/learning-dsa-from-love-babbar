#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            if (i != k)
            {
                nums[k] = nums[i];
                nums[i] = 0;
            }
            k++;
        }
    }
}

int main()
{

    return 0;
}
