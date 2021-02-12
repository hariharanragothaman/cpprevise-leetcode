/*
 *
 * You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.
 * Return the sum of all the unique elements of nums.

Example 1:

Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.
Example 2:

Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.
Example 3:

Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.


Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int sumofUnique(vector<int>& nums)
{
    int total_count = 0;
    unordered_map<int, int> hmap;
    for(auto& it: nums )
    {
        hmap[it] += 1;
    }

    for(auto it = hmap.begin(); it != hmap.end(); ++it)
    {
        cout << it->first << it->second << endl;
        if (it->second == 1)
        {
            total_count += it->first;
        }
    }

    return total_count;

}


int main()
{
    vector<int> nums = {1, 1, 2, 3, 4};
    int result = sumofUnique(nums);
    cout << result;
    return 0;
}