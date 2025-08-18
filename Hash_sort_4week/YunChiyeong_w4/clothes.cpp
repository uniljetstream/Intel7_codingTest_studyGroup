#include <string>
#include <vector>
#include <iostream>
<<<<<<< HEAD
#include <map>
=======
#include <unordered_map>
>>>>>>> b72ffeeb5cd95c9654b70aee8dff83f2f26a2c03

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;

<<<<<<< HEAD
    map<string, int> m;

    for(int i = 0; i < clothes.size(); i++)
    {
        m[clothes[i][1]]++;
    }

    for(auto& [key, value] : m)
    {
        cout << key << " " << value << '\n';
    }
=======
    unordered_multimap<string, string> u_m_map;

    for(auto a : clothes)
    {
        cout << a.at(0) << " " << a.at(1) << endl;
        u_m_map.emplace(a.at(0), a.at(1));
    }
    

>>>>>>> b72ffeeb5cd95c9654b70aee8dff83f2f26a2c03
    return answer;
}


int main()
{
    solution({{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}});
    // solution({{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}});
}