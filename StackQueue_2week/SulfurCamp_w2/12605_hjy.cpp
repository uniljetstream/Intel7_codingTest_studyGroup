#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // 개행 문자 제거

    for (int i = 1; i <= N; ++i) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        cout << "Case #" << i << ": ";
        for (int j = words.size() - 1; j >= 0; j--) {
            cout << words[j] << (j == 0 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
