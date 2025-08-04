#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    // freopen("input.txt", "r", stdin);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int, vector<int>, greater<int>> pq;
    int N;
    long long n;
    cin >> N;

    for (int i = 0; i < N * N; i++)
    {
        cin >> n;
        pq.emplace(n);
        if (pq.size() > N)
        {
            pq.pop();
        }
    }
    cout << pq.top();
}