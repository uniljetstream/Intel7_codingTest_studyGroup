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

    return answer;
}
