#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
	string S, E, Q;

	cin >> S >> E >> Q;

	string time, name;
	set<string> set;
	int cnt = 0;
	while (!cin.eof()) {
		cin >> time >> name;

		if (S >= time) {
			set.emplace(name);
		}
		
		if (E <= time && Q >= time) {
			if (set.count(name)){
				set.erase(name);
				cnt++;
			}
		}
	}

	cout << cnt;
}