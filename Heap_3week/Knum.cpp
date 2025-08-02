#include <vector>
// #include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(vector<int> c:commands)
    {
        vector<int> temp(array.begin()+(c.at(0)-1), array.begin()+(c.at(1)));
        sort(temp.begin(), temp.end());
        // for(int t:temp)
        //     cout << t <<" ";
        answer.push_back(temp.at(c.at(2)-1));
        // cout << endl;
    }
    
    return answer;
}