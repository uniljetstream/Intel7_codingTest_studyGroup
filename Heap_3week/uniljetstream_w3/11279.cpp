#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);    //속도 개선 코드
    cin.tie(NULL);  //속도 개선 코드, 찾아봐도 이 두가지 코드를 제외하고 푸는 건 stl 미사용 뿐.

    int n, x;
    priority_queue<int> maxHeap;

    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x == 0)
        {
            if(maxHeap.empty())
                cout << "0" << '\n';    //endl을 사용하지 않아도 속도 개선
            else
            {
                cout << maxHeap.top() << '\n';
                maxHeap.pop();
            }
        }
        else
        {
            maxHeap.push(x);
        }
    }
}