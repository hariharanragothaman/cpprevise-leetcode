/*
 *Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
Note:
You may assume the string contains only lowercase alphabets.

Follow up:
What if the inputs contain unicode characters? How would you adapt your solution to such case?
 */
#include "headers.h"


// Alternatively we can also sort both of them and check if they are the same.
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        vector<int> c1(26, 0), c2(26,0);
        for(auto it: s)
        {
            c1[it-'a']++;
        }

        for(auto it: t)
        {
            c2[it-'a']++;
        }

        for(int it = 0; it < 26; it++)
        {
            if(c1[it] != c2[it])
                return false;
        }
        return true;
    }
};

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;
    bool isPermutation = is_permutation(s.begin(), s.end(), t.begin());
    return isPermutation;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    bool flag = isAnagram(s, t);
    cout << "Is it an anagram..? " << flag << endl;
    return 0;
}