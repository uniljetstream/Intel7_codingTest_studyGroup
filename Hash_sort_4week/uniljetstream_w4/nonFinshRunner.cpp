#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    map<string,int> parti;
    for(string p:participant)
        parti[p]++; //접근과 삽일을 동시에 해야해서 다른 함수 사용불가 at?왜 안됨

    for(string c:completion)    //완주한 사람 --, 0이면 맵에서 삭제
    {
        parti[c]--;
        if(parti[c]==0)
            parti.erase(c);
    }
    
    for(const auto& p:parti) //맵에 남아 있는 동명이인을 포함해서 answer에 넣기
    {
        for(int i=0;i<p.second;i++)
            answer.append(p.first);
    }
    return answer;
}