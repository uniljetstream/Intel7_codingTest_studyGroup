#include <iostream>
#include <queue>

using namespace std;
/*
이 문제 n의 최댓값은 1500임.
n*n의 수를 입력받으므로 2250000(1500*1500)개의 숫자를 입력받음
int는 4바이트이므로 n이 1500일 때 9MB(9000000B)의 공간을 차지하게 됨.

그럼 남은 3MB로 무언걸 해야하는데 크기가 넉넉치 않음

방법 1. stl의 사용을 줄여서(직접 heap을 구현하기)
방법 2. 우선순위의 큐의 공간을 최소로 유지하기
방법 3. 매번 정렬하기 -> 어차피 2번하고 같네

방법1.
템플릿의 구체화는 컴파일 타임에 이루어짐. 그러면 메모리와는 크게 상관 없겠는데?

방법2.
항상 n개만 남기면 되지 않을까?

최종 n 개만 남았을 때 우리가 원하는 답은 가장 작은 수임. -> 최소 힙을 쓸까?

*/
int main()
{
    ios::sync_with_stdio(false); // 속도 개선 코드
    cin.tie(NULL);

    int n, num;
    int a, b, c, d, e;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            minHeap.push(num);
            if(minHeap.size() > n)
                minHeap.pop();
        }
    }

    cout << minHeap.top();
}