#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    long long a, b, c;

    cin >> a >> b >> c;

    if (c % 2 == 0)
    {
        cout << a;
    }
    else
        cout << (a ^ b);
    // 13 xor 3 > 14
    // 14 xor 3 > 13

    // 13 > 1101
    //  3 > 0011
    //  1110
    //  0011

    // 1101

    return 0;
}