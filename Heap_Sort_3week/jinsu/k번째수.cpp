#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (int i = 0; i < commands.size(); ++i) {
        vector<int> temp(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
        int k = commands[i][2];
        sort(temp.begin(), temp.end());

        answer.push_back(temp[k - 1]); // k번째 값 추가
    }

    return answer;
}
