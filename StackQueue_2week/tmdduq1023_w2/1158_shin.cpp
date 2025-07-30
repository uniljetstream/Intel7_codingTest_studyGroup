#include <queue>
#include <iostream>
using namespace std;
int main()
{
    queue<int> q;
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = 1; i <= num1; i++)
    {
        q.push(i);
        //cout << q.back();
    }
    cout << "<";
    while (!(q.empty()))
    {
        for (int j = 1; j < num2; j++)
        {
            int backup = q.front();
            q.pop();
            q.push(backup);
        }
        cout << q.front();
        q.pop();
        if (!(q.empty()))
        {
            cout << ", ";
        }
    }
    cout << ">";

    return 0;
}
