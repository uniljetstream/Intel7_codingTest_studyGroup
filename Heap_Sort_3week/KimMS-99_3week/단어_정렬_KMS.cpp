#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back({s.size(), s});
    }

    sort(v.begin(), v.end());
    // std::unique(v.begin(), v.end()) : 중복을 제거한 것처럼 보이게 벡터 내부를 정리하고 중복이 제거된 범위의 끝을 가리키는 iterator를 반환
    v.erase(unique(v.begin(), v.end()), v.end()); // 정렬이 되어있는 벡터에서 중복된 요소를 제거하는 방법

    for (int i = 0; i < v.size(); i++)
        cout << v[i].second << "\n";

    return 0;
}
