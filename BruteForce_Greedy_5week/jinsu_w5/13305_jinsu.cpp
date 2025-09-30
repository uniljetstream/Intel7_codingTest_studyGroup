#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> distance(n - 1);
    vector<long long> price(n);

    for (int i = 0; i < n - 1; ++i)
    {
        cin >> distance[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> price[i];
    }

    long long total_cost = 0;
    long long min_price = price[0];

    for (int i = 0; i < n - 1; ++i)
    {
        if (price[i] < min_price)
        {
            min_price = price[i];  // 더 싼 가격 발견 시 갱신
        }
        total_cost += min_price * distance[i];  // 누적 비용 계산
    }

    cout << total_cost << '\n';
}
