#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int> center_left;
    priority_queue<int, vector<int>, greater<int>> center_right;
    int N, center;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        if (i != 0)
        {
            if (center > n)
            {
                center_left.push(n);
                center_right.push(center);
            }
            else // center < n
            {
                center_left.push(center);
                center_right.push(n);
            }
            if (i % 2)
            {
                center = center_left.top();
                center_left.pop();
            }
            else
            {
                center = center_right.top();
                center_right.pop();
            }
        }
        else
            center = n;
        cout << center << "\n";
    }

    return 0;
}