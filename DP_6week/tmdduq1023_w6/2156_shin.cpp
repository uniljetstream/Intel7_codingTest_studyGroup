#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> grapejuice(n);
	for (int i = 0; i < n; i++)
	{
		cin >> grapejuice[i];
	}

	vector<int> manyjuice(n);

	manyjuice[0] = grapejuice[0];
	manyjuice[1] = grapejuice[0] + grapejuice[1];
	manyjuice[2] = max({ manyjuice[1], grapejuice[0] + grapejuice[2], grapejuice[1] + grapejuice[2] });

	for (int j = 3; j < n; j++)
	{
		manyjuice[j] = max({
			manyjuice[j - 1],
			manyjuice[j - 2] + grapejuice[j],
			manyjuice[j - 3] + grapejuice[j - 1] + grapejuice[j] });
	}
	cout << manyjuice[n - 1] << endl;
	
	return 0;
}