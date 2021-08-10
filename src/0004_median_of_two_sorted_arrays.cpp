#include "headers.h"

class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        double result = 0.0;
        /* Return the median of the 2 sorted arrays */
        for(auto c: nums2)
            nums1.emplace_back(c);
        sort(nums1.begin(), nums1.end());

        int n = nums1.size();
        if(n %2 != 0)
        {
            auto idx = n/2;
            result = nums1[idx];
        }
        else
        {
            auto idx = n/2;
            result = (nums1[idx] + nums1[idx - 1]) / 2.0;
        }

        return result;

    }
};

int main()
{
    vi nums1 = {1, 2};
    vi nums2 = {3, 4};
    Solution s;
    double ans = s.findMedianSortedArrays(nums1, nums2);
    cout << ans << endl;
    return 0;
}