#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    vector<int> count0(41, 0), count1(41, 0);

    count0[0] = 1;
    count1[0] = 0;
    count0[1] = 0;
    count1[1] = 1;

    for (int i = 2; i < 41; i++)
    {
        count0[i] = count0[i - 1] + count0[i - 2];
        count1[i] = count1[i - 1] + count1[i - 2];
    }

    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        cout << count0[n] << " " << count1[n] << "\n";
    }
    return 0;
}
