#include "headers.h"

class Solution
{
public:
    vector<int> twoSum(vector<int> nums, int target)
    {
        vector<int> result;
        int n = nums.size();
        unordered_map<int, int> hmap;

        for(int i=0; i<n; i++)
        {
            hmap[nums[i]] = i;
        }

        int diff;
        for(int i=0; i<n; i++)
        {
            diff = target - nums[i];
            auto index = find(nums.begin(), nums.end(), diff);
            if (index != nums.end() && hmap[diff] != i)
            {
                result.emplace_back(i);
                result.emplace_back(hmap[diff]);
                return result;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vi nums = {2, 7, 11, 15};
    int target = 9;
    vi res = s.twoSum(nums, target);
    auto lambda_print = [](auto& n) { cout << "Value:" << '\t' << n << endl; };
    for_each(res.begin(), res.end(), lambda_print);
    return 0;
}