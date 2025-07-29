#include <deque>
#include <iostream>

using namespace std;

int main()
{
    deque<int> card;
    int n;

    cin >> n;

    for (int i = 1; i < n+1; i++)
        card.push_back(i);

    // cout << card.front() << endl;

    while (card.size() != 1)
    {
        card.pop_front();
        card.push_back(card.front());
        card.pop_front();
    }
    cout << card.front() << endl;
}