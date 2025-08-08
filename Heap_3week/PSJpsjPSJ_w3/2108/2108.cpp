#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> array;
    int average;
    int f = 0;
    if (N % 2 == 1)
    {
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            x = array[i];
        }
        sort(array.begin(), array.end());
        for (int i = 0; i < N; i++)
        {
            f += array[i];
        }
        average = f / N;
        cout << average << '\n';
        cout << array[N / 2] << '\n';
        cout << //최빈 값 구하는 코드 구현해야 함
            cout << array.end() - array.begin();
    }

    return 0;
}
