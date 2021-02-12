/* Remove element from an array -in place and return the length of the resultant array */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int index = 0;
        for(int i=0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

/*  The other smart way to do it using STL is: 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};

*/

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution s1;
    int result = s1.removeElement(nums, val);
    cout << "The result is " << result << endl;

    return 0;
}
