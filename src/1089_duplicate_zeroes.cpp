#include "headers.h"

void duplicateZeroes(vector<int>& arr)
{
    int shift = count(arr.begin(), arr.end(), 0);
    int size = arr.size();

    for (int i = arr.size()-1; i >= 0; i--)
    {
        if (!arr[i])
            shift --;
        if (i+shift < size)
        {
            arr[i+shift] = arr[i];
            if (!arr[i] and i+shift+1 < size)
                arr[i+shift+1] = 0;
        }
    }

    for(auto&it : arr)
        cout << it << endl;
}

int main()
{
    vector<int> arr{1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZeroes(arr);
    return 0;
}