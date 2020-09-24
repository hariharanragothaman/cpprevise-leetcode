#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(string s)
{
    vector<char> myStack;
    vector<char> opened = { '(', '[', '{' };
    vector<char> closed = { ')', ']', '}' };

    for(auto it: s)
    {
        if(count(opened.begin(), opened.end(), it))
            myStack.emplace_back(it);

        else if(count(closed.begin(), closed.end(), it))
        {
            auto index = find(closed.begin(), closed.end(), it);
            auto  idx = distance(closed.begin(), index);
            if(myStack.size() > 0 and myStack.back() == opened[idx] )
                myStack.pop_back();
            else
                return false;
        }

    }

    if(myStack.size() > 0) return false;
    return true;
}

int main()
{
    string s = "{}[]()";
    bool op;
    op = isValid(s);
    cout << "Is it valid? " << op;
}