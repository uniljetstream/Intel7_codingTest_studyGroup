#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<int> st;
    string str;

    for (int i = 0; i < N; i++)
    {
        cin >> str;
        if (str == "pop")
        {
            st.pop();
        }
        else if (str == "size")
        {
            cout << st.size() << endl;
        }
        else if (str == "top")
        {
            cout << st.top() << endl;
        }
        else if (str == "empty")
        {
            cout << st.empty() << endl;
        }
        else if (str == "push")
        {
            int X;
            cin >> X;
            st.push(X);
        }
    }
    

    return 0;
}
