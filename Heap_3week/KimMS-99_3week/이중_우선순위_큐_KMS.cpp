#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        multiset<int> q;
        multiset<int>::iterator it;
        int nn;
        cin >> nn;
        for (int j = 0; j < nn; j++)
        {
            char c;
            int nnn;
            cin >> c >> nnn;
            if (c == 'I')
            {
                q.insert(nnn);
            }
            else if (c == 'D' && !q.empty())
            {
                if (nnn == -1)
                {
                    q.erase(q.begin());
                }
                else if (nnn == 1)
                {
                    it = q.end();
                    q.erase(--it);
                }
            }
            // cout << "front : " << *q.begin() << ", back : " << *q.rbegin() << endl;
        }
        if (!q.empty())
        {
            it = q.end();
            it--;
            cout << *it << " ";
            it = q.begin();
            cout << *it << endl;
        }
        else
            cout << "EMPTY" << endl;
    }

    return 0;
}
