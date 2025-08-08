#include <deque>
#include <iostream>

using namespace std;

int main()
{
    int n, k;
    deque<int> yose;
    
    int flag;
    cin >> n >> k;

    for (int i = 1; i < n + 1; i++)
        yose.push_back(i);

    while(yose.empty() != true)
    {
        yose.push_front(yose.at(k-1));
        yose.erase(yose.begin() + (k));
        k++;
    }

    for (int word : yose)
        cout << word;
}