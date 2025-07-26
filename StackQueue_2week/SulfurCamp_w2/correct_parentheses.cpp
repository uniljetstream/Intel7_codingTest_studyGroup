#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool solution(const string s) {

    stack<char> st;
    
    for (char c : s) {
        if (c == '(') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}