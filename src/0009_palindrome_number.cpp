/* Check if a given integer is a palindorme */

#include <iostream>
#include <algorithm>
using namespace  std;

bool isPalindrome(int x)
{
    // Basic idea here is to reverse the integer.
    long reverse = 0;
    long num = abs(x);

    while(x != 0)
    {
        reverse *= 10;
        reverse += x % 10;
        x /= 10;
    }

    return reverse == num;
}

int main()
{
    bool result;
    int num = 121;
    result = isPalindrome(num);
    cout << "Is it a Palindrome?:" << result;
}