#include <string>
#include <vector>
using namespace std;
int minCount = 100000;

void minJoystick(string& name, vector<bool>& completed, int N, int index, int completedCount, int answer){
    if(answer > minCount)
        return;
    
    bool was_already_completed = completed[index];
    
    if(!completed[index]) { 
        if(name[index] <= 'N'){ // 'A' ~ 'N'의 알파벳일 경우
            answer += (name[index] - 'A');
        }
        else{ // 'O' ~ 'Z'의 알파벳일 경우
            answer += 91 - name[index];
        }
        completed[index] = true;
        completedCount++;
    }
    
    if(completedCount == N){
        if(answer <= minCount)
            minCount = answer;
        
        if (!was_already_completed) { // 백트래킹
            completed[index] = false;
        }
        
        return;
    }
    
    int rightIndex = (index < N - 1) ? index + 1 : 0;
    minJoystick(name, completed, N, rightIndex, completedCount, answer + 1);

    int leftIndex = (index > 0) ? index - 1 : N - 1;
    minJoystick(name, completed, N, leftIndex, completedCount, answer + 1);
    
    if (!was_already_completed) { // 백트래킹
        completed[index] = false;
    }
}

int solution(string name) {
    int answer = 0, index = 0;
    
    int N = name.size();
    
    vector<bool> completed(N, false);
    int completedCount = 0;
    for (int i = 0; i < N; i++){
        if(name[i] == 'A'){
            completed[i] = true;
            completedCount++;
        }
    }
    
    minJoystick(name, completed, N, index, completedCount, answer);
    
    answer = minCount;
    return answer;
}