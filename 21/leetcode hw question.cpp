#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = 0; i < n; i++)
    {
        nums1[m + i] = nums2[i];
    }

    sort(nums1.begin(), nums1.end());
}

int main()
{
    // im not writing the rest, u get it
    
    return 0;
}
