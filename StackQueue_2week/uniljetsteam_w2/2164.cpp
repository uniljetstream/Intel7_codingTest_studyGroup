#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> card;
    int n;

    cin >> n;

    for(int i=0;i<n;i++)
        card.push_back(i);

    card.pop_front();

    while(card.size() == 1)
    {
        
    }
}