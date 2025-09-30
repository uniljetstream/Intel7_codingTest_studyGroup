#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std;

int main() {
    string S, E, Q;
    cin >> S >> E >> Q;

    set<string> check;
    set<string> recheck;

    string log;
    cin.ignore();

    while (getline(cin, log)) {
        if (log.empty()) continue;

        stringstream ss(log);
        string timeStr, nickname;
        ss >> timeStr >> nickname;

        if (timeStr <= S) {
            check.insert(nickname);
        }
        else if (timeStr >= E && timeStr <= Q) {
            if (check.count(nickname)) {
                recheck.insert(nickname);
            }
        }
    }

    cout << recheck.size() << endl;
    return 0;
}
