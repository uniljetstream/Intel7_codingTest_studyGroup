#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    bool flag = true;
    int old_n;

    for (int n : arr)
    {
        if (flag)
        {
            flag = false;
            answer.push_back(n);
        }
        else
        {
            if (n != old_n)
                answer.push_back(n);
        }
        old_n = n;
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}
