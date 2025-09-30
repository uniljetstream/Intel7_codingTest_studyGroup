#include <iostream>
#include <map>
#include <algorithm>

using namespace std;
/*
1. deque와 sort() 활용
qsort는 평균 O(nlogn), 최악 O(n^2)
하지만 대부분의 언어에는 모든 경우에 O(nlogn)인 최적화된 sort()를 제공

이것도 너무 무거운 듯?

2. mutiset 활용
mutiset은 내부적으로 정렬 시킴.(set은 중복 불가, mutiset은 중복 허용)
정렬의 시간 복잡도는 O(logn)

3. map은
map은 모든 adt에 대해 O(n)임. 이게 가장 좋은듯?
*/
int main()
{
    ios::sync_with_stdio;
    cin.tie(0);

    int t,n, dataCnt;
    char oper;

    map<int, int> q;

    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> dataCnt;
        for(int j=0;j<dataCnt;j++)
        {
            cin >> oper >> n;
            if(oper=='I')
                q[n]++;
            else if(!q.empty() && oper=='D')
            {
                if(n==1)
                {
                    auto lastElement = --q.end();//map iterator는 +1, -1같은 산술연산은 불가
                    lastElement->second--; 
                    if(lastElement->second == 0)
                        q.erase(lastElement);
                } 
                else if(n==-1)
                {
                    auto firstElement = q.begin(); 
                    firstElement->second--;
                    if(firstElement->second == 0)
                        q.erase(firstElement);
                }
            }
        }
        if(q.empty()) cout << "EMPTY" << '\n';
        else
        {
            auto firstElement = q.begin(); 
            auto lastElement = --q.end();

            cout << lastElement->first << " " << firstElement->first << '\n';
        } 
        q.clear();
    }
}
