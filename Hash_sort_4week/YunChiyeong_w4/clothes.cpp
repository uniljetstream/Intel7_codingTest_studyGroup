#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;

    unordered_multimap<string, string> u_m_map;

    for(auto a : clothes)
    {
        cout << a.at(0) << " " << a.at(1) << endl;
        u_m_map.emplace(a.at(0), a.at(1));
    }
    

    return answer;
}


int main()
{
    solution({{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}});
    // solution({{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}});
}