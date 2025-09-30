#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles)
{
    int answer = 0;
    vector<vector<int>> vec(n, vector<int>(m, 0));
    vec.at(0).at(0) = 1;         // 시작 위치는 1
    for (auto &puddle : puddles) // 웅덩이 -1로 처리
    {
        vec[puddle[1] - 1][puddle[0] - 1] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vec.at(i).at(j) == -1 || (i == 0 && j == 0)) // 웅덩이 또는 시작점
                continue;

            vec[i][j] = 0;
            if (i > 0 && vec.at(i - 1).at(j) > 0) // 위에서 오는 경우의 수의 합
                vec.at(i).at(j) += vec.at(i - 1).at(j);

            if (j > 0 && vec.at(i).at(j - 1) > 0) // 왼쪽에서 오는 경우의 수의 합
                vec.at(i).at(j) += vec.at(i).at(j - 1);

            vec.at(i).at(j) %= 1000000007;
        }
    }

    return vec.at(n - 1).at(m - 1);
}