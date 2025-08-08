#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    long long N, K, answer = 0;
    cin >> N >> K;
    queue<int> namelen[21]; // 글자수에 인덱스
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        namelen[s.length() - 1].push(i);
        while (!namelen[s.length() - 1].empty() && i - namelen[s.length() - 1].front() > K)
        {
            namelen[s.length() - 1].pop();
        }
        if (!namelen[s.length() - 1].empty())
        {
            answer += namelen[s.length() - 1].size() - 1;
        }
    }
    cout << answer << endl;

    return 0;
}
