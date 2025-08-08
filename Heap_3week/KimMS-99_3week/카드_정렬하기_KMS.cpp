#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int card;
        cin >> card;

        pq.push(card);
    }

    if (pq.size() == 1)
    {
        cout << 0 << "\n";
        return 0;
    }
    int result = 0, temp = 0;
    while (!pq.empty())
    {
        temp = pq.top();
        pq.pop();
        temp += pq.top();
        pq.pop();
        if (!pq.empty())
            pq.push(temp);
        result += temp;
        // cout << "result : " << result << ", temp : " << temp << "\n";
    }

    cout << result << "\n";

    return 0;
}