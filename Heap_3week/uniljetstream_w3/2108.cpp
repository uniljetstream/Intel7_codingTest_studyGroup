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
    if (numVector.size() == 1) // 원소가 하나면 예외 처리리
        return numVector.front();
    map<int, int> modeMap;
    for (int nV : numVector)
        modeMap[nV]++;

    // 1. 최빈값이 뭔지 찾기
    vector<pair<int, int>> frequencyVec(modeMap.begin(), modeMap.end()); // 벡터로 만들어서
    sort(frequencyVec.begin(), frequencyVec.end(),
         [](pair<int, int> num1, pair<int, int> num2) { return num1.second < num1.second; }); // second 기준 정렬하기

    int maxCount = frequencyVec.at(frequencyVec.size() - 1).second;  // 가장 큰 횟수
    if (maxCount != frequencyVec.at(frequencyVec.size() - 2).second) // 마지막 원소 두개 비교 : 최빈값이 1개이면 리턴
        return frequencyVec.at(frequencyVec.size() - 1).first;

    // 2. 최빈값을 가진 키가 2개 이상 이면 최빈값을 가진 원소들로 map 만들기
    vector<pair<int, int>> RepeatedValueVec;
    for (pair<int, int> fV : frequencyVec)
    {
        if (fV.second == maxCount)
            RepeatedValueVec.push_back(fV);
    }

    // 3.새로 만들어진 맵을 벡터?로 바꿔서 정렬하기
    sort(RepeatedValueVec.begin(), RepeatedValueVec.end(),
         [](pair<int, int> num1, pair<int, int> num2) { return num1.second < num1.second; }); // second 기준 정렬하기
    // 4. 두 번째 원소의 first 리턴하기
    return RepeatedValueVec.at(1).first;
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
