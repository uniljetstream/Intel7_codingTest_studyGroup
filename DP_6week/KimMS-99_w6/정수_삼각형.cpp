#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle)
{
    int answer = 0;
    vector<vector<int>> v;
    v.resize(triangle.size()); // 원소의 개수를 바꿔줌
    for (size_t i = 0; i < triangle.size(); ++i)
        v[i].assign(triangle[i].size(), 0); // 기존 원소를 버리고 내용을 갈아끼움.
    // for (int i = 0; i < triangle.size(); i++)
    // {
    //     for (int j = 0; j < triangle[i].size(); j++)
    //         cout << triangle[i][j] << ' ';
    //     cout << '\n';
    // }

    v[0][0] = triangle[0][0];
    for (int i = 1; i < triangle.size(); i++)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            if (j == 0)
            {
                v[i][j] = triangle[i][j] + v[i - 1][j];
            }
            else if (j == triangle[i].size() - 1)
                v[i][j] = triangle[i][j] + v[i - 1][j - 1];
            else
            {
                v[i][j] = max(triangle[i][j] + v[i - 1][j], triangle[i][j] + v[i - 1][j - 1]);
            }
            if (i == triangle.size() - 1 && v[i][j] > answer)
                answer = v[i][j];
        }
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[v.size()].size(); j++)
    //         cout << v[i][j] << ' ';
    //     cout << '\n';
    // }

    return answer;
}