#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> w;
        v.push_back(w);
    }

    vector<int> maxWine;

    maxWine.push_back(v[0]);
    maxWine.push_back(v[0] + v[1]);
    maxWine.push_back(max({ v[0] + v[2], v[1] + v[2], v[0] + v[1] }));
    
    for (int i = 3; i < n; i++) {
        maxWine.push_back(max({ maxWine[i - 3] + v[i - 1] + v[i], maxWine[i - 2] + v[i], maxWine[i - 1] }));
    }
    
    cout << maxWine[n - 1];
}
