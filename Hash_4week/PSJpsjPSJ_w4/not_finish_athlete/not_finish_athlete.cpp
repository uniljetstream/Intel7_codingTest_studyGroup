#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> m;

    for (const auto& name : participant) {
        ++m[name];
    }
    for (const auto& name : completion) {
        --m[name];
    }
    for (const auto& kv : m) {
        if (kv.second > 0) {
            return kv.first;
        }
    }
    string answer = "";
    return answer;
}
