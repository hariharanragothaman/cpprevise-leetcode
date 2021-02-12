//
// Created by harih on 2/11/2021.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int countBallsUsingHammer(int low, int high)
{
    unordered_map<int, int> hmap;
    while (low <= high)
    {
        int sum = 0;
        string tmp = to_string(low);
        for(auto& it: tmp)
        {
            sum += it - 48;
        }
        hmap[sum] += 1;
        low += 1;
    }

    auto currentMax = 0;
    for(auto it = hmap.begin(); it != hmap.end(); it++)
    {
        cout << it->first << it->second << endl;
        if (it->second > currentMax)
        {
            currentMax = it->second;
        }
    }

    return currentMax;

}

// The ideal C++ way to do it
int countBalls(int low, int high)
{
    vector<int> box (46, 0);
    while (low <= high) {
        int sum = 0;
        int temp = low;

        while (temp) {
            sum += temp % 10;
            temp = temp / 10;
        }
        box[sum]++;

        low += 1;
    }
    return *max_element(box.begin(), box.end());
}


int main()
{
    int low = 1;
    int high = 10;
    int result = countBallsUsingHammer(low, high);
    cout << "The result is:" << result << endl;

    int result2 = countBalls(low, high);
    cout << "The result faster is: " << result2 << endl;
    return 0;
}