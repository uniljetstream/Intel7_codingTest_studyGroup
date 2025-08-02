#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int N;
    cin >> N;

    stack<char> st;
    char L;

    for (int i = 0; i < N; i++)
    {
        while (L != '\n')
        {
            cin >> L;
        }
    }
    for (int i = 0; i < N; i++)
    {
        while (L != '\n')
        {
            if (L != ' ')
            {
                while (st.empty() == false)
                {
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(L);
        }
    }


    return 0;
}