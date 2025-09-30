#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, vector<string>> coni;
    
    for(vector<string> c:clothes)   //종류별로 맵에 넣기
		coni[c[1]].push_back(c[0]);
    
    for(const auto& c:coni)
    {
        answer *= c.second.size() +1;	//각각의 종류를 안입는 경우 포함.
    }
    return answer-1;	//아무것도 안 입는 경우 하나 제외
}