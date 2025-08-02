#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int mean(vector<int> numVector)
{
    int sum = 0;
    for (int num : numVector)
        sum += num;

    return sum / numVector.size();
}

int median(vector<int> numVector)
{
    return numVector.at(numVector.size() / 2);
}

// int mode(vector<int> numVector)
// {

// }

int range(vector<int> numVector)
{
    sort(numVector.begin(), numVector.end());
    cout << "----" << endl;
    for (int num : numVector)
        cout << num << endl;
    cout << "----" << endl;
    return numVector.back() - numVector.front();
}

int main()
{
    int n, num;

    cin >> n;
    vector<int> numVector;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        numVector.push_back(num);
    }

    cout << "평균" << mean(numVector) << endl;   // 산술평균
    cout << "중앙값" << median(numVector) << endl; // 중앙값
    // cout << mode(numVector) << endl;    //최빈값
    cout << "범위" << range(numVector) << endl; // 범위
}