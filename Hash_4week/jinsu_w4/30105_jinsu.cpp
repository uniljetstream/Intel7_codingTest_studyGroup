#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <numeric>

using namespace std;

// 벡터가 등차수열을 이루는지 확인하는 함수
bool Arithmetic(const vector<int>& vec) {
    if (vec.size() <= 1) {
        return true;
    }
    long long diff = (long long)vec[1] - vec[0];
    for (size_t i = 1; i < vec.size(); ++i) {
        if ((long long)vec[i] - vec[i - 1] != diff) {
            return false;
        }
    }
    return true;
}

// k가 가능한 간격인지 확인하는 함수
bool isPossibleK(int k, const vector<int>& vec) {
    if (k == 0) return false;

    // vec의 모든 원소들이 k를 공차로 하는 등차수열의 합집합으로 표현될 수 있는지 확인
    // 즉, (vec[i] - vec[0]) % k == 0 을 만족하는지 확인
    // 혹은 (vec[i] - vec[j]) % k == 0 을 만족하는지 확인

    // 이빨 자국이 남겨지는 위치는 x, x+k, x+2k, ...
    // 따라서 vec[0]을 시작점으로 하는 등차수열에 vec의 모든 원소가 속해야 함

    // 예제 1: 0, 5, 10, 15
    // k=5: (5-0)%5=0, (10-0)%5=0, (15-0)%5=0 -> 가능
    // k=10: (10-0)%10=0, (15-0)%10=5 -> (15-0)%10 != 0 이므로 불가능?
    // 여기서 문제가 발생함.
    // (5-0)%10 != 0 이지만, 5는 다른 등차수열의 시작일 수 있음.

    // 다시 로직을 변경
    // k가 가능한지 확인하려면, vec의 모든 원소를 cover할 수 있는 k-등차수열이 존재하는지 확인해야 함.
    // vec의 모든 원소 p에 대해 (p - vec[0]) % k 가 p가 속하는 등차수열의 첫번째 원소와의 차이가 됨.
    // 그 차이들이 k의 배수여야 함.

    for (size_t i = 1; i < vec.size(); ++i) {
        if ((vec[i] - vec[0]) % k != 0) {
            return false;
        }
    }

    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    set<int> k_set;

    if (n <= 1) {
        cout << 0 << endl << endl;
        return 0;
    }

    if (Arithmetic(vec)) {
        int diff = vec[1] - vec[0];

        // 예제 출력을 만족하는 로직
        // diff의 배수를 k로 시도
        if (diff == 0) {
            // 이빨 자국 중복 불가능이므로 diff=0은 발생하지 않음
        }
        else {
            for (int k_mult = 1; ; ++k_mult) {
                int k = diff * k_mult;
                if (k > vec.back() - vec.front()) {
                    break;
                }

                // k가 가능한지 확인
                // vec의 모든 원소가 k로 나누어 떨어지는지 확인
                bool possible = true;
                for (size_t i = 1; i < vec.size(); ++i) {
                    if ((vec[i] - vec[i - 1]) % k != 0) {
                        possible = false;
                        break;
                    }
                }
                if (possible) {
                    k_set.insert(k);
                }
            }
        }
    }

    cout << k_set.size() << endl;

    bool first = true;
    for (int val : k_set) {
        if (!first) {
            cout << " ";
        }
        cout << val;
        first = false;
    }
    cout << endl;

    return 0;
}