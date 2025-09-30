#include <string>
#include <vector>

#include <algorithm>
#include <iostream> 

#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
    string answer = "";
    
//     for(int i=0;i<participant.size();i++)
//     {
//         vector<string>::iterator it;
//         it=find(completion.begin(), completion.end(), participant[i]);
        
//         if(it == completion.end())
//         {
//             answer = participant[i];
//             //cout << answer<<endl;
//             break;
//         }
//         else
//         {
//             completion.erase(it);
//         }
//     }
    unordered_map<string,int> count;
    for(const auto& name : participant)
    {
        count[name]++;
    }
    for(const auto& cnt : completion)
    {
        count[cnt]--;
    }
    for(const auto& noname : count)
    {
        if(noname.second > 0)
            answer = noname.first;
    }
    return answer;
}