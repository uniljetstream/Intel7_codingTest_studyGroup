#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> cnt;

    for (int i = 0; i < clothes.size(); ++i) {
        string type = clothes[i][1];
        cnt[type] = cnt[type] + 1;
    }
    int answer = 1;
    for (auto it = cnt.begin(); it != cnt.end(); ++it) {
        int count = it->second;
        answer = answer * (count + 1);
    }
    answer = answer - 1;
    return answer;
}
