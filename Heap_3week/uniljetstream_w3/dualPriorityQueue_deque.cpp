#include <iostream>
#include <deque>
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
    deque<int> q;
    
    cin>>t;
    //cin.ignore();
    
    for(int i=0;i<t;i++)
    {
        cin>>dataCnt;
        for(int j=0;j<dataCnt;j++)
        {
            cin >> oper >> n;
            if(oper=='I')
                q.push_back(n);
            else if(!q.empty() && oper=='D')
            {
                if(n==1)
                    q.pop_back();
                else if(n==-1)
                    q.pop_front();
                sort(q.begin(), q.end());
            }
        }
        if(q.empty()) cout<<"EMPTY"<<'\n';
        else cout << q.back() << " " << q.front() << '\n';
    }
}
