#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    //1. 아스키코드로 정렬->2번예시 불가
    //2. 문자열 더하기 이후 앞뒤비교 정렬 어떻게 함?->람다!
    
    //일단 원소를 문자열로 바꾸기
    vector<string> strVec;
    for(int n:numbers)
        strVec.push_back(to_string(n));
    
    //sort는 모든 대상이 세번째 조건을 충족할 때까지 동작
    sort(strVec.begin(), strVec.end(), [](string a, string b){return a+b > b+a;});
    
    for(string sV:strVec)
        answer.append(sV);
    
    //모든 숫자가 0이 경우 case 11
    if(strVec.at(0)=="0")
        return "0";
    return answer;
}
