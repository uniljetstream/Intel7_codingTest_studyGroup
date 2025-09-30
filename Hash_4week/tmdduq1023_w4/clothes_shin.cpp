#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) 
{
    int answer = 1;
    
    unordered_map<string,int>clothnumber;
    for(auto& dht : clothes)
    {
        string name = dht[1];
        clothnumber[name]++;
    }
    for(auto& cnt : clothnumber)
    {
        cnt.second++;
        cout <<cnt.second<<endl;
        answer = cnt.second * answer;
    }
    answer--;
    return answer;
}