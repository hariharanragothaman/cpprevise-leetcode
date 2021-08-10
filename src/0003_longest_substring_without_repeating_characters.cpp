#include "headers.h"

class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int left = 0;
        int right = 0;
        
        vector<int> hmap(128);
        
        int res = 0;
        
        while(right < s.length())
        {
            char ch = s[right];
            hmap[ch]++;

            // While loop to contract the window
            while(hmap[ch] > 1)
            {
                char l = s[left];
                hmap[l] --;
                left++;
                
            }
            
            res = max(res, right-left+1);
            right++;
        }
    }
};