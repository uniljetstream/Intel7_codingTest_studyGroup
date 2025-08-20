#include <string>
#include <vector>

using namespace std;
int solution(string name) {
    int answer = 0;
    
    int N = name.size();
    
    vector<bool> completed(N, false);
    int completedCount = 0;
    for (int i = 0; i < N; i++){
        if(name[i] == 'A'){
            completed[i] = true;
            completedCount++;
        }
    }
    
    int index = 0;
    while(1){
        // 변환해야하는 경우
        if(!completed[index]) { 
            if(name[index] <= 'N'){ // A ~ N의 알파벳일 경우
                answer += (name[index] - 'A');
            }
            else{ // M ~ Z의 알파벳일 경우
                answer += 91 - name[index];
            }
            completed[index] = true;
            completedCount++;
        } 
        
        if(completedCount == N)
            break;
        
        // 오른쪽으로 가야하나?
        int rightFinding = index, rightCount = 0;
        while(completed[rightFinding]){
            if(rightFinding < N - 1){
                rightFinding++;
            }
            else{
                rightFinding = 0;
            }
            rightCount++;
        }
        // 왼쪽으로 가야하나?
        int leftFinding = index, leftCount = 0;
        while(completed[leftFinding]){
            if(leftFinding > 0){
                leftFinding--;
            }
            else{
                leftFinding = N - 1;
            }
            leftCount++;
        }
        
        // 방향 정하기
        if(leftCount < rightCount){
            index = leftFinding;
            answer += leftCount;
        }
        else{
            index = rightFinding;
            answer += rightCount;
        }
    }
    
    return answer;
}