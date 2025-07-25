#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	cin.ignore();
	string str;
	vector<string> v;
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		cout << str << '\n';
	}


}