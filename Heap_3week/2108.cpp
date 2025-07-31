#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

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
    return numVector.at(numVector.size()/2);
}

int mode(vector<int> numVector)
{
    
}

int range(vector<int> numVector)
{
    sort(numVector.begin(), numVector.end());
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

    cout << mean(numVector) << endl;    //산술평균
    cout << median(numVector) << endl;  //중앙값
    cout << mode(numVector) << endl;    //최빈값
    cout << range(numVector) << endl;   //범위
}