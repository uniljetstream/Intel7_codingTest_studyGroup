#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;

bool isOk(vector<vector<int>>& board, int N, int i, int j) { // 겹치는 퀸이 있는지 판단하는 함수: 겹치면 false 안겹치면 true
    int x = i, y = j;

    while (x > 0 && y > 0) {
        if (board[x - 1][y - 1] == 1) {
            return false;
        }
        x--;
        y--;
    }
    x = i, y = j;

    while (x > 0) {
        if (board[x - 1][y] == 1) {
            return false;
        }
        x--;
    }
    x = i;

    while (x > 0 && y < N - 1) {
        if (board[x - 1][y + 1] == 1) {
            return false;
        }
        x--;
        y++;
    }

    return true;
}

void nQueen(vector<vector<int>>& board, int N, int q) {
    if (q == N) {
        cnt++;
        return;
    }
    for (int j = 0; j < N; j++) {
        if (isOk(board, N, q, j)) { // 만약 안겹치면
            board[q][j] = 1;
            nQueen(board, N, q + 1);
            board[q][j] = 0;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int>> board(N, vector<int>(N, 0)); // N X N 벡터(board)

    nQueen(board, N, 0);

    cout << cnt;

    return 0;
}