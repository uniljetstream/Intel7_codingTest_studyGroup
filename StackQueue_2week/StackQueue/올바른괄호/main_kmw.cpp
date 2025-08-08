#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool solution(string& ps) {
    stack<char> s; // 괄호 문자열 ps의 괄호들을 저장할 스택
    stack<int> check; // ')'의 수를 체크하는 스택
    int k;

    for (int j = 0; j < ps.length(); j++) { // 괄호 문자열 ps를 앞에서부터 stack에 저장
        s.push(ps[j]);
    }

    if (s.top() == '(') { // 만약 ps가 '('로 끝났다면 닫히지 않고 끝났으므로 무조건 false
        return false;
    }
    else { // ps가 ')'로 끝났다면 (닫히고 끝났다면)
        for (k = 0; k < ps.length(); k++) {
            if (s.top() == ')') { // ')'가 나타날 때마다
                check.push(1); // 체크
                s.pop(); // 다음
            }
            else if (s.top() == '(') { // '('가 나타났을 때
                if (check.empty()) { // 체크가 비었다면 => 앞에 매칭 되는 ')'가 없다면
                    return false; // 거짓
                }
                else { // 체크가 비어있지 않다면 => 앞에 매칭될 수 있는 ')가 있다면
                    s.pop(); // 다음
                    check.pop(); // ')'하나 제거
                }
            }
        }
        if (check.empty()) // 모든 괄호를 다 확인한 후 에 체크가 비었다면 => 모든 괄호가 매칭 됨
            return true;
        else // 모든 괄호를 다 확인한 후에 체크가 남았다면 => 매칭되지 못한 괄호가 남음
            return false;
    }
    while (!s.empty()) s.pop();
    while (!check.empty()) check.pop();
}
/****************************************확인 용************************************/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int K;
    string ps;
    cin >> K;

    for (int i = 0; i < K; i++) {
        int k;
        cin >> ps;

        if (solution(ps))
            cout << "true\n";
        else
            cout << "false\n";
    }

    return 0;
}
