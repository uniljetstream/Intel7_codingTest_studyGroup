#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums) {
    unordered_map<int, int> countMap;


    for (int num : nums) {
        countMap[num]++;
    }


    int n = nums.size() / 2; //가져갈 포켓몬


    return min((int)countMap.size(), n);  //작은값 리턴
}
