#include <iostream>
#include <vector>
using namespace std;

vector<int> f(int N){
    vector<int> result;
    if(N == 0)
        result = {1, 0};
    else if(N == 1)
        result = {0, 1};
    else{
        vector<vector<int>>v(N + 1, vector<int>(2, 0));
        v.at(0) = {1, 0};
        v.at(1) = {0, 1};
    
        for (int i = 2; i < N + 1; i++){
            v[i].at(0) = v[i - 1].at(0) + v[i - 2].at(0);
            v[i].at(1) = v[i - 1].at(1) + v[i - 2].at(1);
        }

        result = v[N];
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    cin >> T;
    
    vector<int> answer;
    for(int i = 0; i < T; i++){
        cin >> N;
        answer = f(N);
        cout << answer[0] << ' ' << answer[1] << '\n';
    }
}
