#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    vector<int> nanswer;
    int num = -1;
    while (!(arr.empty()))
    {
        if (num != arr.back())
        {
            nanswer.push_back(arr.back());
        }
        num = arr.back();
        arr.pop_back();
    }
    cout << endl;
    //answer.push_back(num);
    int size = nanswer.size();
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        answer.push_back(nanswer.back());
        nanswer.pop_back();
    }

    return answer;
}