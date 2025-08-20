#include <string>
#include <vector>
#include <iostream>  // cout
#include <algorithm> // sort()
#include <unordered_set>

using namespace std;

// numbers : 입력 숫자
// us : 조합된 숫자를 넣을 집합
// c : numbers에서 각 자릿수가 사용중인걸 체크하기 위한 vector
// ns : 재귀 횟수 제한을 위한 변수
// a : 현재까지 만들어진 숫자의 값
void combination(const string &numbers, unordered_set<int> &us, vector<bool> &c, int ns, int a)
{
    if (ns < numbers.size()) // numbers 길이보다 작은 깊이에서만 재귀 수행
    {
        string temp = to_string(a);
        us.insert(a); // 현재까지 만들어진 숫자 a를 집합에 저장 (중복 방지)

        // numbers의 각 자리(i)를 하나씩 선택해서 이어붙임
        for (int i = 0; i < numbers.size(); i++)
        {
            if (!c[i]) // 이미 사용 중인 자리라면 건너뜀
                continue;

            string tt = temp + numbers[i]; // 현재 숫자 a 뒤에 i번째 숫자를 붙여서 새로운 숫자 생성
            c[i] = false; // i번째 숫자를 사용 중으로 표시
            combination(numbers, us, c, ns + 1, stoi(tt)); // 재귀적으로 다음 자리 조합
            c[i] = true;                                   // 재귀가 끝나면 다시 사용 가능 상태로 되돌림
        }
    }
}

int solution(string numbers)
{
    int answer = 0;
    string tempN = numbers;
    sort(tempN.begin(), tempN.end(), greater<char>());
    int maxnum = stoi(tempN);

    // cout << "tempN : " << tempN << ", maxnum : " << maxnum << endl;

    // maxnum : numbers 로 가능한 조합에서 가장 큰 수
    // maxnum까지에 소수 판별(그놈의 에라토스테네스의 채)
    vector<bool> v(maxnum + 1, true);
    v[0] = false; // 0, 1은 소수가 아님
    v[1] = false;
    for (int i = 2; i * i <= maxnum; i++)
    {
        if (v[i] == true)
        {
            for (long long j = i * i; j <= maxnum; j += i)
            {
                v[j] = false;
            }
        }
    }

    unordered_set<int> us; // 숫자 조합을 해서 집합에 넣음(중복 제거)
    vector<bool> c(numbers.size());
    for (int i = 0; i < numbers.size(); i++)
    {
        c[i] = false; // i번째 자릿수의 숫자가 시작점 
        for (int j = 0; j < numbers.size(); j++)
            if (i != j) // 나머지는 사용 가능하게
                c[j] = true;
        // 숫자를 조합하기 위한 재귀함수
        combination(numbers, us, c, 0, numbers[i] - '0');
    }

    // us 집합에 들어가있는 수가 소수면 answer++
    for (auto it = us.begin(); it != us.end(); it++)
    {
        if (v[*it])
            answer++;
    }

    return answer;
}