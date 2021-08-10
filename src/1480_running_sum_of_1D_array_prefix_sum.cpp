class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> result(n);
        fill(result.begin(), result.end(), 0);
        
        int temp = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            result[i] = temp + nums[i];
            temp = result[i];
        }
        return result;
    }
};