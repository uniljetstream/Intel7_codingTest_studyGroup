#include <queue>
#include <iostream>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, greater<int>> mh;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (num > 0)
		{
			mh.push(num);
		}
		else
		{
			if (mh.empty())
			{
				cout << 0 << "\n";
			}
			else
			{
				cout << mh.top() << "\n";
				mh.pop();
			}
		}
	}

	return 0;
}