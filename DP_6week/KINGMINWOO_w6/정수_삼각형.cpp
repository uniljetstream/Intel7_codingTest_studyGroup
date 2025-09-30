#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0, n = triangle.size();
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) 
                triangle[i][j] += triangle[i - 1][j];
            else if (j == i) 
                triangle[i][j] += triangle[i - 1][j - 1];
            else 
                (triangle[i - 1][j - 1] >= triangle[i - 1][j]) ? (triangle[i][j] += triangle[i - 1][j - 1]) : (triangle[i][j] += triangle[i - 1][j]);
        }
    }
    
    for (int j = 0; j < n; j++) {
        if (triangle[n - 1][j] >= answer)
            answer = triangle[n - 1][j];
    }
    return answer;
}
