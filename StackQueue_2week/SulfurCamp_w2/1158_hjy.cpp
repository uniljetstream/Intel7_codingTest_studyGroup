#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> people;
    for (int i = 1; i <= N; ++i) {
        people.push_back(i); 
    }

    vector<int> result;
    int idx = 0;

    while (!people.empty()) {
        idx = (idx + K - 1) % people.size(); 
        result.push_back(people[idx]);      
        people.erase(people.begin() + idx); 
    }
    cout << "<";
    for (int i = 0; i < N; i++) {
        cout << result[i];
        if (i != N - 1)
            cout << ", ";
    }
    cout << ">" << endl;

    return 0;
}
