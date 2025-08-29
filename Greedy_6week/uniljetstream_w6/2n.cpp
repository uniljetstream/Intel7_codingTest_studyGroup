#include <string>
#include <vector>

using namespace std;
//점화식 현재 구현 가능한 사각형 수 x = (x-1) + (x-2) 
int solution(int n) {
    int answer = 0;
    
    if(n ==1) return 1;
    if(n==2) return 2;
    
    vector<int> vec(n+1, 0);
    
    vec.at(1) = 1;
    vec.at(2) = 2;
    
    for(int i=3;i<=n;i++)
        vec.at(i) = (vec.at(i-1) + vec.at(i-2))%1000000007; //왜 이렇게 해야 답임??? -> 분배 법칙으로 결과는 같지만 int 값을 벗어나는 걸 방지
    
    answer = vec.at(n); //% 1000000007;
    
    return answer;
}