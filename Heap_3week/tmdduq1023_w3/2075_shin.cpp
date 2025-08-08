#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    priority_queue<int, vector<int>, greater<int>> mh;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int text;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cin >> text;
            mh.push(text);
        }
        for (int k = 1; k < num; k++)
        {
            mh.pop();
        }
    }
    
    cout << mh.top() << "\n";
    return 0;
}