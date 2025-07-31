#include <iostream>
#include <queue>

using namespace std;

/*
최소 큐 설명
priority_queue의 템플릿은 다음과 같다.
template<
    class T,
    class Container = std::vector<T>,
    class Compare = std::less<typename Container::value_type>
> class priority_queue;

Contaioner는 내부적으로 vector를 사용하도록 되어있다는 뜻
Compare는 비교함수로 디폴트 값일 경우에는 최대 우선순위큐로 되어 있음.
만약 최소 우선 순위 큐로 사용하려면 Compare에 std::greater<int>를 사용하면 됨.

참고 : https://en.cppreference.com/w/cpp/container/priority_queue.html
*/

int main()
{
    ios::sync_with_stdio(false);    //속도 개선 코드
    cin.tie(NULL);
    
    int n, x;
    priority_queue<int, vector<int>, greater<int>> minHeap;


}