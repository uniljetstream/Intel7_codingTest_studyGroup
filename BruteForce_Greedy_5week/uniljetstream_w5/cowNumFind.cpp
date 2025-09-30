#include <algorithm>
#include <cmath> //sqrt()
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

// 1. 모든 소수 구하기

int solution(string numbers)
{
    int answer = 0;
    set<int> result;

    for (int i = 1; i < numbers.size() + 1; i++)
    {
        string bitmask(numbers.size(), 0);         // next_permutation() 을 위해 필요
        fill(bitmask.end() - i, bitmask.end(), 1); // 끝에 하나씩 증가하면서 추가

        do
        {
            string temp;
            int num;
            for (int j = 0; j < bitmask.size(); j++) // 생성된 조합 순서와 일치하면 temp에 넣음.
            {
                if (bitmask[j])
                    temp.push_back(numbers[j]);
            }

            // next_permutation은 오름차순으로 순열을 생성함. 정렬 필수
            // prev_permutation은 내림차순으로 생성하므로 역정렬 필수.
            sort(temp.begin(), temp.end()); // 이건 순서가 필요해서 마스크 x
            do                              // 1, 7일 때, 17과 71을 만들기 위해 필요
            {
                // 소수검출
                num = stoi(temp);
                if (num < 2)
                    continue;
                else if (num == 2)
                    result.emplace(num);
                else if (num % 2 == 0)
                    continue;
                else
                {
                    bool flag = true;
                    for (int k = 3; k <= (int)sqrt(num); k += 2)
                    {
                        if (num % k == 0)
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) // for 문 탈출용
                        result.emplace(num);
                }
            } while (
                next_permutation(temp.begin(), temp.end())); // temp로 구현될 수 있는 모든 수 중 소수를 result에 넣기

        } while (next_permutation(bitmask.begin(), bitmask.end())); // 전체 수 중 가능한 조합 찾기
    }

    // for (int r : result)
    // cout << r << " ";
    return result.size();
}

int main()
{
    cout << solution("011");
}