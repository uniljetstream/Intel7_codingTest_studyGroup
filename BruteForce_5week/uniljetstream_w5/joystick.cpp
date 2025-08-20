#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// 아스키코드 A = 65 Z = 90
int solution(string name)
{
    int answer = 0;
    int updownCnt = 0;
    for (char n : name)
    {
        // 1. 윗키 조작과 아랫키 조작 중 최솟값 찾기
        updownCnt += min(n - 'A', 'Z' - n + 1);
        // cout << "min : " << min(n - 'A', 'Z' - n + 1) << endl;
        // cout << updownCnt << endl;
    }

    // 2. 각 자리에서 이동할 때 고려할 것
    // 어떤 경우에 어떤 선택? -> 조작이 필요 없을 때 -> 앞자리가 A일때
    // A를 만나면 최솟값을 찾아야하나?
    // 일단 중간에서 되돌아가는 건 비효율적임
    // 그러면 뭐가 있지???? 근데 이걸 어떻게 짜지

    // 다시 생각해보자 안나온다.
    // 1. 좌->우로 한 번만 가는 것 당연히 고려해야함.
    // 2. BAAA 이런 경우는? A가 이어지면 -> 이거다.
    // 문제는 연속된 A를 어떻게 처리하냐

    int n = name.size();
    int minMove = n - 1; // 기본: 쭉 오른쪽

    for (int i = 0; i < n; i++)
    {
        // 연속된 'A' 구간 찾기
        int nextPos = i + 1;
        while (nextPos < n && name[nextPos] == 'A')
        { // 연속된 A의 갯수세기
            nextPos++;
        }

        // 3가지 패턴 비교
        int pattern2 = i * 2 + (n - nextPos); // 좌로 가다가 연속된 A를 만나면 왼쪽으로 가서 오른쪽으로 가기
        int pattern3 = (n - nextPos) * 2 + i; // 끝부터 시작하기:(오른쪽으로 이동거리) *2[왕복이동] +i[시작 지점]

        minMove = min({minMove, pattern2, pattern3});
    }
    return updownCnt + minMove;
}

int main()
{
    cout << solution("JEROEN") << endl;
}
