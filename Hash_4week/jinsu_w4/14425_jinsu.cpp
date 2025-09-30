#include <iostream>
#include <stdio.h>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	int count = 0;

	unordered_set<std::string> s;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		s.insert(str);
	}

	for (int i = 0; i < m; i++)
	{
		string str;
		cin >> str;
		if (s.find(str) != s.end())
		{
			count++;
		}
	}

	cout << count;
}