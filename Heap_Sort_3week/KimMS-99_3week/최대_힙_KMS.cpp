#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int> heap;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        unsigned int nn;
        cin >> nn;
        if (nn == 0)
        {
            if (!heap.empty())
            {
                cout << heap.top() << "\n";
                heap.pop();
            }
            else
                cout << 0 << "\n";
        }
        else
            heap.push(nn);
    }

    return 0;
}
