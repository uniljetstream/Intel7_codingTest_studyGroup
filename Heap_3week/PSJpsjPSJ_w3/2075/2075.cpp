#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<vector<int>> array(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> array[i][j];
            pq.push(array[i][j]);
            if (pq.size() > N)
            {
                pq.pop();
            }
        }
    }
    cout << pq.top();
    return 0;
}
