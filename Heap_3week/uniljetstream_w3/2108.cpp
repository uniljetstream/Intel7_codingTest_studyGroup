#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

int mean(vector<int> numVector)
{
    if (numVector.size() == 1) // 원소가 하나면 예외 처리리
        return numVector.front();
    double sum = 0;
    for (int num : numVector)
        sum += num;

    return round(sum / numVector.size()); // round : 소수점을 정수로 만듬.
}

int median(vector<int> numVector)
{
    if (numVector.size() == 1) // 원소가 하나면 예외 처리리
        return numVector.front();
    sort(numVector.begin(), numVector.end());
    return numVector.at((numVector.size() - 1) / 2);
}

int mode(vector<int> numVector)
{
    // 1. 최빈값 찾기,  하나면 해당 값 반환
    map<int, int> modeMap;
    for (int n : numVector)
    {
        modeMap[n]++;
    }

    // 사이즈가 1이거나, 최빈값을 가진 키가 하나면 그거를 리턴하자
    vector<pair<int, int>> modeVec(modeMap.begin(), modeMap.end());
    sort(modeVec.begin(), modeVec.end(), [](pair<int, int> val1, pair<int, int> val2) { return val1.second < val2.second; });
    if (modeVec.size() == 1 || (modeVec.back().second != modeVec.at(modeVec.size() - 2).second))
        return modeVec.back().first;

    // 2. 최빈값이 여러 개면? 두 번째로 작은 수 찾기(맵은 어차피 키 값을 기준으로 정렬인데?)
    int modeVal = modeVec.back().second;
    for (map<int, int>::iterator it = modeMap.begin(); it != modeMap.end(); it++)
    {
        if (it->second != modeVal)
            modeMap.erase(it);
    }
    map<int, int>::iterator it = modeMap.begin();
    it++;
    return it->first;
}

int range(vector<int> numVector)
{
    if (numVector.size() == 1) // 원소가 하나면 예외 처리리
        return 0;
    sort(numVector.begin(), numVector.end());
    // cout << "----" << endl;
    // for (int num : numVector)
    //     cout << num << endl;
    // cout << "----" << endl;
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

    cout << mean(numVector) << endl;   // 산술평균
    cout << median(numVector) << endl; // 중앙값
    cout << mode(numVector) << endl;   // 최빈값
    cout << range(numVector) << endl;  // 범위
}
