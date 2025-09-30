#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end());

    int answer = 0;
    int n = citations.size();

    for (int i = 0; i <= n; i++) {
        if (n - i >= 0 && citations[n - i] >= i) {
            answer = i;
        }
    }

    return answer;
}