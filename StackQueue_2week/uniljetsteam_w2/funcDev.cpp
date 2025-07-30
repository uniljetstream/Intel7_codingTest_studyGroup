#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> jobs;
    int fin = 1;
    for(int i=0;i<progresses.size();i++)
    {
        if((100-progresses.at(i))%speeds.at(i)!=0)
            jobs.push_back(((100-progresses.at(i))/speeds.at(i))+1);
        else
            jobs.push_back((100-progresses.at(i))/speeds.at(i));
    }
    
    for(int job:jobs)
        cout << job << endl;
    
    int flag = 0;
    for(int i=1;i<jobs.size();i++)
    {
        if(jobs.at(flag)<jobs.at(i))
        {   
            answer.push_back(fin);
            flag = i;
            fin = 1;
        }
        else
            fin++;
    }
    answer.push_back(fin);  //가장 마지막 종료일 넣어주기
    return answer;
}
