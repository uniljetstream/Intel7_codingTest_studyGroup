#include <array>
#include <iostream>

using namespace std;

int main()
{

    array<array<int, 2>, 41> fibo = {0}; // 0부터 40까지
    int t;

    fibo.at(0).at(0) = 1;
    fibo.at(1).at(1) = 1;

    for (int i = 2; i < 41; i++)
    {
        fibo.at(i).at(0) = fibo.at(i - 2).at(0) + fibo.at(i - 1).at(0);
        fibo.at(i).at(1) = fibo.at(i - 2).at(1) + fibo.at(i - 1).at(1);
    }

    cin >> t;

    int i = 0;
    int n = 0;
    while (i < t)
    {
        cin >> n;
        cout << fibo.at(n).at(0) << " " << fibo.at(n).at(1) << endl;
        i++;
    }
}
