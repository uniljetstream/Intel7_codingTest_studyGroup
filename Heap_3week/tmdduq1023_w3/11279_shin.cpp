#include <queue>
#include <iostream>
using namespace std;
int main()
{
	priority_queue<int> maxHeap;
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
			maxHeap.push(num);
		}
		else
		{
			if (maxHeap.empty())
			{
				cout << 0 << "\n";
			}
			else
			{
				cout << maxHeap.top() << "\n";
				maxHeap.pop();
			}
		}
	}

	return 0;
}