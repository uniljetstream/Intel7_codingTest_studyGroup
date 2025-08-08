#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    while (!progresses.empty()) {
        // 개발 진도 업데이트
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] += speeds[i];
        }

        // 완료된 작업 체크
        int cnt = 0;
        while (!progresses.empty() && progresses[0] >= 100) {
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            cnt++;
        }

        // 완료된 작업 수가 있으면 저장
        if (cnt > 0)
            answer.push_back(cnt);
    }

    return answer;
}



