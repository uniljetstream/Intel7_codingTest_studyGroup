#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    vector<int> N(T);

    vector<int> zero(41);
    vector<int> one(41);
    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;
    for (int i = 0; i < T; i++)
    {
        cin >> N[i];
    }

    for (int j = 2; j <= 40; j++) 
    {
        zero[j] = zero[j - 1] + zero[j - 2];
        one[j] = one[j - 1] + one[j - 2];
    }
    for (int i = 0; i < T; i++)
    {
        cout << zero[N[i]] << " " << one[N[i]] << "\n";
    }
    return 0;
}
