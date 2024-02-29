// Given a 0-indexed integer array nums of length n and an integer target,
// return the number of pairs (i, j) where 0 <= i < j < n and nums[i] + nums[j] < target.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {-6, 2, 5, -2, -7, -1, 3};
    int target = -2;

    sort(nums.begin(), nums.end()); 

    int left = 0, right = nums.size() - 1;
    int res = 0;

    while (left < right)
    {
        if (nums[left] + nums[right] < target)
        {
            res += (right - left);
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << res;

    return 0;
}
