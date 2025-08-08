#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Number { // 입력되는 정수의 값과 빈도를 저장하기 위한 클래스
public:
	int num;
	int frequency;
	Number() { this->frequency = 0; } // 생성자: 최초 빈도를 0으로 설정
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v; // 입력되는 수를 저장할 벡터
	vector<int> maxIndex; // 최빈값들을 저장할 벡터
	int avg, mid, fre, ran;
	double avgOrg; // 실수형 평균값을 저장할 변수
	Number ary[8001]; // -4000 ~ 4000 사이의 수를 0 ~ 8000 까지 매핑


	int N, n, sum = 0, maxFre = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		ary[n + 4000].num = n; //입력된 정수를 0 ~ 8000 인덱스에 매핑해서 입력
		ary[n + 4000].frequency += 1; // 각 정수마다의 빈도수 카운트
		if (maxFre <= ary[n + 4000].frequency) 
			maxFre = ary[n + 4000].frequency; // 최대 빈도수 초기화
		sum += n;
		v.push_back(n);
	}

	for (int i = 0; i < 8001; i++) {
		if (ary[i].frequency == maxFre) { // 각 정수들의 빈도가 최대 빈도수인 경우
			maxIndex.push_back(ary[i].num); // 최빈값으로 저장
		}
	}

	sort(v.begin(), v.end()); // 입력받은 정수를 오름차순으로 정렬
	sort(maxIndex.begin(), maxIndex.end()); // 최빈값을 오름차순으로 정렬

	// 산술평균
	avgOrg = (double)sum / (double)N;
	avg = round(avgOrg); // round: 소수점 이하 첫째 자리에서 반올림
	// 중앙값
	mid = v[(N - 1) / 2]; // 중앙값 출력
	// 최빈값
	if (maxIndex.size() == 1) // 최빈값이 하나라면
		fre = maxIndex[0]; // 첫번째 출력
	else // 최빈값이 하나 이상이라면 
		fre = maxIndex[1]; // 두번째 출력
	// 범위
	ran = v[N - 1] - v[0]; // 범위 출력

	// 출력
	cout << avg << '\n';
	cout << mid << '\n';
	cout << fre << '\n';
	cout << ran << '\n';
}