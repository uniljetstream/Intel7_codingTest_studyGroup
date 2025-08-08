#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>()); //내림차순 정렬. greater <-> less
    
    for(int i=0;i<citations.size();i++)
    {
        if(citations.at(i) >= i+1)
            answer = i+1;
        else
            break;
    }
    
    return answer;
}
