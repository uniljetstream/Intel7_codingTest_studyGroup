#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	cin >> N >> M;

	string address, password; // 주소와 비밀번호를 입력받을 변수
	map<string, string> m; // 주소와 비밀번호를 저장할 맵

	for (int i = 0; i < N; i++) {
		cin >> address >> password;
		m[address] = password;
	}
	
	vector<string> v; // 비밀번호가 필요한 주소들을 저장해 놓을 벡터
	for (int i = 0; i < M; i++) {
		cin >> address;
		v.push_back(address);
	}

	for (int i = 0; i < M; i++) {
		cout << m[v[i]] << '\n'; // 비밀번호 출력
	}
}