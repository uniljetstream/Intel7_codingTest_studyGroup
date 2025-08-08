#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (auto& cmd : commands)
    {
        int i = cmd[0];
        int j = cmd[1];
        int k = cmd[2];
        vector<int> sub(array.begin() + (i - 1), array.begin() + j);
        sort(sub.begin(), sub.end());
        answer.push_back(sub[k - 1]);
    }
    return answer;
}
