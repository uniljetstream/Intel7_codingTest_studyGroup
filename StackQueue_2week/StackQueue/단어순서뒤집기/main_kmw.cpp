/*
	✅ istringstream이란?

	#include <sstream>에 정의되어 있음

	std::string을 입력 스트림처럼 다루게 해줌

	cin처럼 >> 연산자 사용 가능 (공백 단위로 추출)

	문자열을 숫자나 단어 단위로 쉽게 파싱 가능
*/

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str, token; // str: 입력 받을 문자열(공백 포함), token: 입력 받은 문자열을 공백을 기준으로 나눈 문자열을 하나씩 저장할 문자열
	stack<string> st; // token이 저장될 스택

	int N;
	cin >> N;
	cin.ignore(); // 밑에 getline을 쓰기 위해 cin이후에 버퍼에 남아있는 개행문자('\n')를 지움

	for (int i = 0; i < N; i++) {
		getline(cin, str, '\n'); // 개행문자가 나올 때 까지 입력한 문자열(공백 포함)을 str에 저장

		istringstream iss(str); // str을 입력 스트림처럼 다루기 위해 iss 선언
		while (iss >> token) { // 읽을 값이 있으면 true, 읽을 값이 남아있지 않으면 false 리턴
			st.push(token); // 공백을 기준으로 나눈 문자열을 앞에서부터 순서대로 스택에 push
		}

		cout << "Case #" << i + 1 << ": ";
		while (!st.empty()) {
			cout << st.top() << ' '; // 나중에 들어간 token부터 먼저 출력 => 입력에 역순으로 출력 됨
			st.pop();
		}
		cout << '\n';
	}
}

