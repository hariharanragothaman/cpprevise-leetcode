//
// Created by harih on 9/22/2020.
//

/*
 * Given a sorted array, remove the duplicates from it
 * Try implementing it in-place
 *
 * Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
 * Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 */

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int i = 1;
    while( i < nums.size())
    {
        if(nums[i] == nums[i-1])
        {
            nums.erase (nums.begin()+i);
        }
        else
        {
            i++;
        }
    }

    return nums.size();

}

int main()
{
    vector<int> nums = {1, 1, 2};
    int result;
    result = removeDuplicates(nums);
    cout << "The result is: " << result << endl;
    return 0;
}