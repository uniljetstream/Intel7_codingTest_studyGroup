#include <deque>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    int top;
    deque<pair<int, int>> tops;
    stack<pair<int, int>> laser;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> top;
        tops.push_back(make_pair(top, i));
    }

    laser.push(tops.front());
    tops.pop_front();
    cout << "0 ";
    deque<pair<int, int>>::iterator it = tops.begin();

    while (!tops.empty())
    {
        if(laser.empty())
        {
            laser.push(tops.front());
            tops.pop_front();
        }
        else if (laser.top().first < it->first && !laser.empty())
            laser.pop();
        else if (laser.top().first > it->first && !laser.empty())
        {
            cout << laser.top().second+1<< " ";
            laser.push(tops.front());
            tops.pop_front();
            it++;
        }
        else if (laser.size() == 1)
        {
            cout << "0 ";
            it++;
        }
    }
    cout << "0";
}