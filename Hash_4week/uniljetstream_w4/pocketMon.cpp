#include <vector>
#include <set>
#include <algorithm>

using namespace std;

/*
nums.size()/2와 종류의 갯수 중에 작은 것이 답
*/
int solution(vector<int> nums)
{
    set<int> pocket(nums.begin(), nums.end());
    int sizeNum = nums.size()/2;
    int kindCnt = pocket.size();
    
    return sizeNum < kindCnt ? sizeNum : kindCnt;
}