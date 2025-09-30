#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
// 이렇게 보면 이해하기 쉬움
/*
(0,0)
(1,0), (1,1)
(2,0), (2,1), (2,2)
(3,0), (3,1), (3,2), (3,3)
(4,0), (4,1), (4,2), (4,3), (4,4)
*/

//** 자기자신까지 더해진 값을 temp 에 저장

int solution(vector<vector<int>> triangle)
{
    int answer = 0;
    vector<vector<int>> temp(triangle.size()); // 입력과 동일 사이즈의 공간, 자기위치까지 더한 수

    for (int i = 0; i < triangle.size(); ++i)
        temp[i].assign(triangle[i].size(), 0); // temp의 사이즈를 미리 지정,0으로 초기화. assign활용

    temp.at(0).at(0) = triangle.at(0).at(0);    //피라미드 중 가장 상위 값
    for (int i = 1; i < triangle.size(); i++)
    {
        for (int j = 0; j < triangle.at(i).size(); j++)
        {
            if (j == 0) //피라미드 왼쪽 끝 값은 [윗 줄 첫원소 + 자기자신] 임.
                temp.at(i).at(j) = temp.at(i - 1).at(j) + triangle.at(i).at(j);
            else if (j == triangle.at(i).size() - 1)    //피라미드 오른쪽 끝 값은 [윗줄 마지막 원소 + 자기자신]
                temp.at(i).at(j) = temp.at(i - 1).at(j - 1) + triangle.at(i).at(j);
            else
            {   //자신의 왼쪽 대각선과 오른쪽 대각선에서 더해지는 값을 비교해서 더 큰 값을 자기 위치에 넣기
                int max1 = temp.at(i-1).at(j-1) + triangle.at(i).at(j);
                int max2 = temp.at(i-1).at(j) + triangle.at(i).at(j);
                temp.at(i).at(j) = max(max1, max2);
            }
        }
    }
    //가장 아랫줄의 최댓값을 리턴하면 된다.
    //max_element : stl container에서 최댓값의 iterator를 리턴함.
    answer = *max_element(temp.at(temp.size() - 1).begin(), temp.at(temp.size() - 1).end());
    return answer;
}