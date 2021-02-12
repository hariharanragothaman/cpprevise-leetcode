/*
 * Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.
 */

/*
 * s = "leetcode"
return 0.

s = "loveleetcode"
return 2.
 */

// For this we cannot use unordered map

#include "headers.h"
#include <map>

int firstUniqueChar(string s)
{
    if (s.length() == 0)
    {
        return -1;
    }
    // By default map is sorted based on it's key - since it's implemented as a binary search tree.
    map<char, int> ord_hmap;
    int result = -1;
    for(auto&it : s)
    {
        ord_hmap[it] += 1;
    }

    // Need to find an equivalent for enumerate() - when using for loops
    // Also need to figure out if this second parsing can be avoided
    for(int j = 0; j <s.length(); j++)
    {
        if (ord_hmap[s[j]] == 1)
        {
            result = j;
            break;
        }
    }
    return result;
}



int main()
{
    string s = "loveleetcode";
    int result = firstUniqueChar(s);
    cout << "The result is: " << result;
    return 0;
}