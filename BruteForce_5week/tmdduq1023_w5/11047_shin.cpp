#include<vector>
#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int N,K;
	cin >> N >> K;
	vector<int> coin(N);
	for (int i = 0; i < N; i++)
	{
		cin >> coin[i];
	}

	for (int i = N - 1; i >= 0; i--) 
	{
		int num;
		if (K == 0)
		{
			break;
		}
		num = K / coin[i];
		answer = answer + num;
		K = K % coin[i];
	}
	cout << answer << "\n";
	return 0;
}