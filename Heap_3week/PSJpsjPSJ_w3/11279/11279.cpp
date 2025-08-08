#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    priority_queue<int> pq;
    int N;
    cin >> N;
    while (N != 0)
    {
        int x;
        cin >> x;
        if (x != 0)
        {
            pq.push(x);
        }
        else
        {
            if (pq.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        N--;
    }
    return 0;
}
