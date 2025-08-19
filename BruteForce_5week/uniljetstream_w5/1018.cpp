#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int Wcnt = 0, Bcnt = 0;

    cin >> n >> m;

    // 그냥 패턴을 비교할래 == 슬라이딩 윈도우
    string patterW = "WBWBWBWB";
    string patterB = "BWBWBWBW";

    string line;
    vector<string> woodBoard;

    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        woodBoard.push_back(line);
    }

    // patterW
    while(1)
    {
        for (int i = 0; i < 8 + i && (8 + i) < m; i++)
        {
                 
        }
    }
}