#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int N, n;
    vector<int> v(N*N);
    make_heap(v.begin(), v.end());

    int cnt = 0;
    while(v.size())
    {
        cout << cnt++;
    }
}