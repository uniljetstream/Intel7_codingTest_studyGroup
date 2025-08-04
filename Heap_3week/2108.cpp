#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include <map>

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
    sort(numVector.begin(), numVector.end());
    return numVector.at((numVector.size()-1) / 2);
}

int mode(vector<int> numVector)
{
    map<int, int> modeMap;
    for(int nV:numVector)
    {
        modeMap[nV]++;
    }

    vector<pair<int, int>> sortVec(modeMap.begin(), modeMap.end());

    sort(modeMap.begin(), modeMap.end(),[](vector<pair<int, int>> num1, vector<pair<int, int>> num2) {return num1->second<num2->second });

    if(sortVec.at(sortVec.size()-1)->second <sortVec.at(sortVec.size()-2)->second)
        return sortVec.at(sortVec.size()-2);
    else
        return sortVec.at(sortVec.size()-1);
}
int range(vector<int> numVector)
{
    sort(numVector.begin(), numVector.end());
    //cout << "----" << endl;
    //for (int num : numVector)
    //    cout << num << endl;
    //cout << "----" << endl;
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
    cout << mode(numVector) << endl;    //최빈값
    cout << range(numVector) << endl; // 범위
}
