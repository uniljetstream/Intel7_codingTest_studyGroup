#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // 2의 제곱 중 n 이하인 가장 큰 값 구하기
    int max_2 = 1;
    while (max_2 * 2 <= n) {
        max_2 *= 2;
    }

    //  2의 제곱수
    if (!(n & (n - 1))) {
        cout << n << endl;
    }
    else {
        cout << 2 * (n - max_2) << endl;
    }

    return 0;
}
