#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n; // n 은 홀수
    double sum = 0;
    vector<int> vv(8001, 0);
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nn;
        cin >> nn;
        v.push_back(nn);
        vv[4000 + nn]++;
        sum += nn;
    }

    sort(v.begin(), v.end());

    // 최빈값중 두번째로 작은 값 구하기
    pair<int, int> p[2] = {};
    for (int i = 0; i < 8001; i++)
    {
        if (p[0].first < vv[i])
        {
            p[0].first = vv[i];
            p[0].second = i;
        }
        else if (p[0].first == vv[i])
        {
            if (p[1].first == vv[i])
                continue;
            else
            {
                p[1].first = vv[i];
                p[1].second = i;
            }
        }
    }

    cout << (int)round(sum / n) << "\n"                                                 // 산술평균
         << v[(n - 1) / 2] << "\n"                                                      // 중앙값
         << (p[0].first > p[1].first ? p[0].second - 4000 : p[1].second - 4000) << "\n" // 최빈값중 두번째로 작은 값
         << v[n - 1] - v[0];                                                            // 범위

    return 0;
}
