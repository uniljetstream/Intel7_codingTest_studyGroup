#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <numeric>

using namespace std;

// ���Ͱ� ���������� �̷���� Ȯ���ϴ� �Լ�
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

// k�� ������ �������� Ȯ���ϴ� �Լ�
bool isPossibleK(int k, const vector<int>& vec) {
    if (k == 0) return false;

    // vec�� ��� ���ҵ��� k�� ������ �ϴ� ���������� ���������� ǥ���� �� �ִ��� Ȯ��
    // ��, (vec[i] - vec[0]) % k == 0 �� �����ϴ��� Ȯ��
    // Ȥ�� (vec[i] - vec[j]) % k == 0 �� �����ϴ��� Ȯ��

    // �̻� �ڱ��� �������� ��ġ�� x, x+k, x+2k, ...
    // ���� vec[0]�� ���������� �ϴ� ���������� vec�� ��� ���Ұ� ���ؾ� ��

    // ���� 1: 0, 5, 10, 15
    // k=5: (5-0)%5=0, (10-0)%5=0, (15-0)%5=0 -> ����
    // k=10: (10-0)%10=0, (15-0)%10=5 -> (15-0)%10 != 0 �̹Ƿ� �Ұ���?
    // ���⼭ ������ �߻���.
    // (5-0)%10 != 0 ������, 5�� �ٸ� ���������� ������ �� ����.

    // �ٽ� ������ ����
    // k�� �������� Ȯ���Ϸ���, vec�� ��� ���Ҹ� cover�� �� �ִ� k-���������� �����ϴ��� Ȯ���ؾ� ��.
    // vec�� ��� ���� p�� ���� (p - vec[0]) % k �� p�� ���ϴ� ���������� ù��° ���ҿ��� ���̰� ��.
    // �� ���̵��� k�� ������� ��.

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

        // ���� ����� �����ϴ� ����
        // diff�� ����� k�� �õ�
        if (diff == 0) {
            // �̻� �ڱ� �ߺ� �Ұ����̹Ƿ� diff=0�� �߻����� ����
        }
        else {
            for (int k_mult = 1; ; ++k_mult) {
                int k = diff * k_mult;
                if (k > vec.back() - vec.front()) {
                    break;
                }

                // k�� �������� Ȯ��
                // vec�� ��� ���Ұ� k�� ������ ���������� Ȯ��
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