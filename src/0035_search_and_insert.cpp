#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    int index;
    vector<int>::iterator output;

    output = lower_bound(nums.begin(), nums.end(), target);
    index = output - nums.begin();
    return index;
}


int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int index;
    int target = 2;
    index = searchInsert(arr, target);
    cout << "The index is: " << index << endl;
}