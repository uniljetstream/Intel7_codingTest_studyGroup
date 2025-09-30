#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    int num_road = N - 1;
    vector<int> road(num_road);
    vector<int> soil(N);
    int money = 0;
    for (int i = 0; i < num_road; i++)
    {
        cin >> road[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> soil[i];
    }
    int cheap = soil[0];
    for (int i = 0; i < num_road; i++)
    {
        if (soil[i] < cheap)
        {
            cheap = soil[i];
        }
        money = money + (cheap * road[i]);
    }
    cout << money;

    return 0;
}
