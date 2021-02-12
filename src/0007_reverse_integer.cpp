#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int reverse(int x)
{
    long res = 0;
    bool sign;

    sign = ( x < 0) ? false:true;
    x = abs(x);

    while(x > 0)
    {
        int rem = x % 10;
        if( res*10 > INT_MAX) return 0;
        res = res*10 + rem;
        x /= 10;
    }

    if (!sign) res *= -1;
    return res;
}

int main()
{
    int x = 120;
    int op;
    op  = reverse(x);
    cout << op;
}