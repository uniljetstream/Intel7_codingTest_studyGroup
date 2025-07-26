#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    if (!arr.empty())
    {
        answer.push_back(arr[0]);
    }

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}

int main() {
	vector<int> ans = solution({4,4,4,3,3});
    for (int i : ans)
    {
        cout << i << endl;
    }
} 