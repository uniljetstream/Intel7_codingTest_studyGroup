#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int Wcnt = 0, Bcnt = 0;
    int minVal = 1000000000;
    string line;

    cin >> n >> m;

    vector<vector<char>> woodBoard(n, vector<char>(m, 0));

    // 그냥 패턴을 비교할래 == 슬라이딩 윈도우
    vector<vector<char>> patterW = {{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};

    vector<vector<char>> patterB = {
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    };

    cin.ignore();
    // 1. 입력받아서 벡터로 저장.
    for (int i = 0; i < n; i++)
    {
        cin >> line;
        for (int j = 0; j < line.size(); j++)
            woodBoard.at(i).at(j) = line.at(j);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << woodBoard.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }
    // 2. 슬라이딩 원도우 이동하면서 불일치 갯수를 저장. 그 중 최소를 리턴

    // 1. 맨 위가 시작 좌표에서 오른쪽으로 한칸씩 이동하면서 비교
    bool flag = false;
    for (int i = 0; i <= n - 8; i++)
    {
        for (int j = 0; j <= m - 8; j++)
        {
            Wcnt = 0;
            Bcnt = 0;
            for (int k = 0; k < 8; k++)
            {
                for (int l = 0; l < 8; l++)
                {
                    if (woodBoard.at(i + k).at(j + l) != patterW.at(k).at(l))
                        Wcnt++;
                    if (woodBoard.at(i + k).at(j + l) != patterB.at(k).at(l))
                        Bcnt++;
                }
            }
            minVal = min(min(Wcnt, Bcnt), minVal);
        }
    }

    cout << minVal;
}