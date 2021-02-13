/*
 * Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list.

Example:
Assume that words = ["practice", "makes", "perfect", "coding", "makes"].

Input: word1 = “coding”, word2 = “practice”
Output: 3
Input: word1 = "makes", word2 = "coding"
Output: 1
Note:
You may assume that word1 does not equal to word2, and word1 and word2 are both in the list.
 */

#include "headers.h"

int shortestDistance(vector<string>& words, string word1, string word2)
{
    vector<int>word1_index;
    vector<int>word2_index;
    int result = INT_MAX;

    for(int i = 0; i < words.size(); i++)
    {
        if (words[i] == word1)
            word1_index.emplace_back(i);
        else if (words[i] == word2)
            word2_index.emplace_back(i);
    }


    for (auto&i : word1_index)
    {
        for (auto&j : word2_index)
        {
            if ( abs(i-j) < result)
                result = abs(i-j);
        }
    }

    return result;

}

int main()
{
    vector<string>words = {"practice", "makes", "perfect", "coding", "makes"};
    string word1 = "coding";
    string word2 = "practice";
    int result = shortestDistance(words, word1, word2);
    cout << "The result is:" << result;
    return 0;
}