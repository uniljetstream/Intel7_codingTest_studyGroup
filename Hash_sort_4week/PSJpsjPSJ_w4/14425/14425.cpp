#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    unordered_set<string> S;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        S.insert(s);
    }
    int answer = 0;
    for (int i = 0; i < M; i++) {
        string q;
        cin >> q;
        if (S.find(q) != S.end())
            answer++;
    }
    cout << answer << '\n';
    return 0;
}
