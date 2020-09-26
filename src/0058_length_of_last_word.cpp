#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include <sstream>

using namespace std;

/*
 * Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word (last word means the last appearing word if we loop from left to right) in the string.
 * If the last word does not exist, return 0.
 * Note: A word is defined as a maximal substring consisting of non-space characters only.
 */

// STL based solution
int lengthOfLastWord(string s)
{
    string str;
    istringstream stream(s);
    while (stream >> str);
    return str.size();

}

int main()
{
    string ip = "Hello World";
    int op;
    op = lengthOfLastWord(ip);
    cout << op;
}