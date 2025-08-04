#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//아스키 코드로 정렬하면 되겠는데?

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    
    for(int n:numbers)
        temp.push_back(to_string(n));   //전부 문자열로 만들기
    
    sort(temp.rbegin(), temp.rend());
    
    for(string t:temp)
        answer.append(t);   //append는 string, push_back은 char
    return answer;
}