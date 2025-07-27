#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n = 0, k = 0;
    cin >> n >> k;
    
    queue<int> q, temp;
    vector<int> v;

    for(int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    auto it = v.begin();
    int cnt = 1; 
    while(!v.empty())
    {
        if(cnt % 3 == 0)
        {
            cout << *it << " ";
            it = v.erase(it);
        }
        ++it;
        cnt++;
    }
    
    // 1 2 3 4 5 6 7 

    // 4 5 6 7

    // 7



    return 0;
}