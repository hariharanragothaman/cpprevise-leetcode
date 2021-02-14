/*
 * Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.



Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
Example 4:

Input: nums = [1]
Output: [1]
 */

/*
 * Find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, just reverse nums and done.
 * Find the largest index l > k such that nums[k] < nums[l].
 * Swap nums[k] and nums[l].
 * Reverse the sub-array nums[k + 1:].
 */


#include "headers.h"

void nextPermutation(vector<int>& nums)
{
    next_permutation(nums.begin(), nums.end());
}

void nextPermutationFromScratch(vector<int>& nums)
{
    int n = nums.size();
    int k, l;

    for(k = n-2; k >= 0; k--)
        if (nums[k] < nums[k+1])
            break;

    if (k < 0)
        reverse(nums.begin(), nums.end());
    else
    {
        for(l = n-1; l > k ; l--)
            if (nums[l] > nums[k])
                break;

            swap(nums[k], nums[l]);
            reverse(nums.begin() + k + 1, nums.end())
    }
}


int main()
{
    vector<int> nums {1, 2, 3};
    nextPermutation(nums);

    // Quick Printing nums
    auto lambda_print = [&](auto& n) { cout << "Value:" << '\t' << n << endl; };
    for_each(nums.begin(), nums.end(), lambda_print);

    return 0;

}
