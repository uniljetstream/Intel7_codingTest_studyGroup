#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    /*
    [행][열]
    {
        {2, 5, 3},
        {4, 4, 1},
        {1, 7, 3}
    }
    */
    for (int a = 0; a < commands.size(); a++)
    {
        vector<int> v(array.begin() + commands.at(a).at(0) - 1, array.begin() + commands.at(a).at(1));
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << endl;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        answer.push_back(v[commands[a][2] - 1]);
        cout << "push" << v[commands[a][2]] << "  ";
    }
    return answer;
}