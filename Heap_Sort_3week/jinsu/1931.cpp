#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    vector<pair<int, int>> vec;

    for (int i = 0; i < n; ++i) {
        int first, second;
        scanf("%d %d", &first, &second);
        vec.push_back({ first, second });
    }

    // 두 번째 원소 기준으로 정렬 (한 번만)
    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
        });

    int count = 0;
    int idx = 0;

    while (idx < vec.size()) {
        pair<int, int> popped = vec[idx];
        count++;
        idx++;

        // popped.second보다 first가 작은 원소는 제거
        while (idx < vec.size() && vec[idx].first < popped.second) {
            idx++;

        }
    }

    printf("%d\n", count);
    return 0;
}
