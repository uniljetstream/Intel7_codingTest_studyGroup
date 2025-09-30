#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(vector<vector<int>> triangle) {
    int height = triangle.size();
    vector<vector<int>> tri_rep = triangle;

    for (int i = 1; i < height; i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            if (j == 0) {
                // 哭率 场
                tri_rep[i][j] = tri_rep[i - 1][j] + triangle[i][j];
            }
            else if (j == triangle[i].size() - 1) {
                // 坷弗率 场
                tri_rep[i][j] = tri_rep[i - 1][j - 1] + triangle[i][j];
            }
            else {
                // 啊款单
                tri_rep[i][j] = max(tri_rep[i - 1][j - 1], tri_rep[i - 1][j]) + triangle[i][j];
            }
        }
    }

    return *max_element(tri_rep[height - 1].begin(), tri_rep[height - 1].end());
}
