#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> nums(t);
    int max_n = 40;

    for (int i = 0; i < t; i++) {
        cin >> nums[i];
    }

    vector<int> zero(max_n + 1); 
    vector<int> one(max_n + 1);

    zero[0] = 1; one[0] = 0;
    if (max_n >= 1) {
        zero[1] = 0; one[1] = 1;
    }

    for (int i = 2; i <= max_n; i++) {
        zero[i] = zero[i - 1] + zero[i - 2];
        one[i] = one[i - 1] + one[i - 2];
    }


    for (int i = 0; i < t; i++) {
        cout << zero[nums[i]] << " " << one[nums[i]] << endl;
    }

    return 0;
}
