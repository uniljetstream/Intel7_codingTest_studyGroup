#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath> // round 함수
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> freq;
    int total = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        total += arr[i];
        freq[arr[i]]++;
    }

    sort(arr.begin(), arr.end());

    int mean = round((double)total / n); // 반올림 처리
    int median = arr[n / 2];
    int range = arr[n - 1] - arr[0];

    vector<int> modes;
    int maxfreq = 0;
    for (auto& p : freq) {
        int num = p.first;
        int count = p.second;

        if (count > maxfreq) {
            maxfreq = count;
            modes.clear();
            modes.push_back(num);
        }
        else if (count == maxfreq) {
            modes.push_back(num);
        }
    }

    sort(modes.begin(), modes.end());
    int mode = (modes.size() == 1) ? modes[0] : modes[1];

    cout << mean << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << range << '\n';

    return 0;
}