#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // 2�� ���� �� n ������ ���� ū �� ���ϱ�
    int max_2 = 1;
    while (max_2 * 2 <= n) {
        max_2 *= 2;
    }

    //  2�� ������
    if (!(n & (n - 1))) {
        cout << n << endl;
    }
    else {
        cout << 2 * (n - max_2) << endl;
    }

    return 0;
}
