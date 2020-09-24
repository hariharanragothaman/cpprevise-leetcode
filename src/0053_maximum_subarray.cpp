#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
 * Given an integer array nums - find the continuous subarray which has the largest sum
 * Some important facts to remember here
 * The array can contain negative numbers - so the running sum can go below zero
 *
 *  Solution approach we are going to use is sliding window
 *
 */

int maxSubArray(vector<int>& nums)
{
    int left = 0, right = 0;
    int currentSum = 0;
    int maxSum = nums[left];

    for(int i=0; i < nums.size(); i++ )
    {
        currentSum += nums[i];
        right = i;
        maxSum = max(maxSum, currentSum);

        while(left <= right and currentSum < 0)
        {
            currentSum -= nums[left];
            left++;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int result = 0;
    result = maxSubArray(arr);
    cout << "The max sum is: " << result;
}