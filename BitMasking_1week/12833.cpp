#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    long long a, b, c, temp;
    
    cin >> a >> b >> c;

    temp = ((((a^b)^b)^b)^b);

    cout << temp << endl;

    return 0;
}