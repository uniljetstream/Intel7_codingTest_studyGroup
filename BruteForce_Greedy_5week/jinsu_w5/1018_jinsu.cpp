#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ���� ü���� ���� �� ����
vector<string> whiteStart = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

vector<string> blackStart = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

// board�� (x, y)���� �����ϴ� 8x8 ������ pattern�� ��
int countDiff(const vector<string>& board, int x, int y, const vector<string>& pattern) {
    int count = 0;
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j)
            if (board[x + i][y + j] != pattern[i][j])
                ++count;
    return count;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> board(N);
    for (int i = 0; i < N; ++i)
        cin >> board[i];

    int minCount = 64; 
    for (int i = 0; i <= N - 8; ++i) {
        for (int j = 0; j <= M - 8; ++j) {
            int countW = countDiff(board, i, j, whiteStart);
            int countB = countDiff(board, i, j, blackStart);
            minCount = min({ minCount, countW, countB });
        }
    }

    cout << minCount << '\n';
    return 0;
}
