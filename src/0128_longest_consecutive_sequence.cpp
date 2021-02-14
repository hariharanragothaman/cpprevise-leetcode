/*
 *  Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9


Constraints:

0 <= nums.length <= 104
-109 <= nums[i] <= 109
 */

#include "headers.h"

int longestConsecutive(vector<int>& nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }

    int max_length = 0;
    int window_length = 0;


    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    for(int i = 1; i < nums.size(); i++)
    {
        if (nums[i] - nums[i-1] == 1)
        {
            window_length += 1;
            if (window_length > max_length)
                max_length = window_length;
        }
        else
        {
            window_length = 0;
        }
    }

    return max_length + 1;
}

int main()
{
    vector<int> nums = {100,4,200,1,3,2};
    int result = longestConsecutive(nums);
    cout << "The length of the longest consecutive sequence is: " << result << endl;
}