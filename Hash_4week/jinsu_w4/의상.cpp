#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> typeCount;


    for (auto& item : clothes) {
        string type = item[1];
        typeCount[type]++;
    }

    int answer = 1;

    for (auto& pair : typeCount) {
        answer *= (pair.second + 1);
    }


    return answer - 1;