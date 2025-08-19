#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    string line;
    vector<vector<char>> woodBoard;
    vector<int> checkedBoard;

    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        getline(cin, line);
        for(char l:line)
            (woodBoard.at(i)).push_back(l);
    }
        
    // 1. 시작이 W인 경우 틀린 경우로 checkedBoard에 표시

    // 1.2. 8x8 칸의 갯수를 세서 최소로 하는 8x8 갯수찾기

    // 2. 시작이 B인 경우 틀린 경우로 checkedBoard에 표시

    // 2.1. 8x8 칸의 갯수를 세서 최소로 하는 8x8 갯수찾기
}