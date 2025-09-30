#include <iostream>
#include <stdio.h>
#include <unordered_map>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	

	std::unordered_map<string, string> map;
	string site , pwd;
	
	for (int i = 0; i < n; i++)
	{
		cin >> site >> pwd;
		map[site] = pwd;
	}
	
	for (int i = 0; i < m; i++)
	{
		cin >> site;
		cout << map[site] << '\n';
	}

}