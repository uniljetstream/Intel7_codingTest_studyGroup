#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;

    map<string, int> m;

    for(int i = 0; i < clothes.size(); i++)
    {
        m[clothes[i][1]]++;
    }

    for(auto& [key, value] : m)
    {
        cout << key << " " << value << '\n';
    }
    return answer;
}


int main()
{
    solution({{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}});
    // solution({{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}});
}