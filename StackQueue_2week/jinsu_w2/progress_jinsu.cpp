#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    while (!progresses.empty()) {
        // ���� ���� ������Ʈ
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] += speeds[i];
        }

        // �Ϸ�� �۾� üũ
        int cnt = 0;
        while (!progresses.empty() && progresses[0] >= 100) {
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            cnt++;
        }

        // �Ϸ�� �۾� ���� ������ ����
        if (cnt > 0)
            answer.push_back(cnt);
    }

    return answer;
}



