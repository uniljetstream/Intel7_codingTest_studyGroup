#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> nameCount;


    for (const string& name : participant) {
        nameCount[name]++;
    }


    for (const string& name : completion) {
        nameCount[name]--;
    }


    for (const auto& entry : nameCount) {
        if (entry.second > 0) {
            return entry.first;
        }
    }


}