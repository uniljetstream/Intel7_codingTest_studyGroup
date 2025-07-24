#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> circle;
    vector<int> result;

    for (int i = 1; i <= N; i++)
    {
        circle.push_back(i);
    }

    int index = 0;

    while (1)
    {
        index = (index + K - 1) % circle.size();
        result.push_back(circle[index]);
        circle.erase(circle.begin() + index);

        if (circle.empty())
            break;
    }

    cout << "<";

    for (int i = 0; i < result.size(); i++)
    {
        if (i == result.size() -1)
            cout << result[i];
        else
            cout << result[i] << ", ";
    }

    cout << ">";

        return 0;
}
