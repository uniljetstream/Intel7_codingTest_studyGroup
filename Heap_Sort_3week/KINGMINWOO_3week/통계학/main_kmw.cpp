#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Number { // �ԷµǴ� ������ ���� �󵵸� �����ϱ� ���� Ŭ����
public:
	int num;
	int frequency;
	Number() { this->frequency = 0; } // ������: ���� �󵵸� 0���� ����
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v; // �ԷµǴ� ���� ������ ����
	vector<int> maxIndex; // �ֺ󰪵��� ������ ����
	int avg, mid, fre, ran;
	double avgOrg; // �Ǽ��� ��հ��� ������ ����
	Number ary[8001]; // -4000 ~ 4000 ������ ���� 0 ~ 8000 ���� ����


	int N, n, sum = 0, maxFre = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		ary[n + 4000].num = n; //�Էµ� ������ 0 ~ 8000 �ε����� �����ؼ� �Է�
		ary[n + 4000].frequency += 1; // �� ���������� �󵵼� ī��Ʈ
		if (maxFre <= ary[n + 4000].frequency) 
			maxFre = ary[n + 4000].frequency; // �ִ� �󵵼� �ʱ�ȭ
		sum += n;
		v.push_back(n);
	}

	for (int i = 0; i < 8001; i++) {
		if (ary[i].frequency == maxFre) { // �� �������� �󵵰� �ִ� �󵵼��� ���
			maxIndex.push_back(ary[i].num); // �ֺ����� ����
		}
	}

	sort(v.begin(), v.end()); // �Է¹��� ������ ������������ ����
	sort(maxIndex.begin(), maxIndex.end()); // �ֺ��� ������������ ����

	// ������
	avgOrg = (double)sum / (double)N;
	avg = round(avgOrg); // round: �Ҽ��� ���� ù° �ڸ����� �ݿø�
	// �߾Ӱ�
	mid = v[(N - 1) / 2]; // �߾Ӱ� ���
	// �ֺ�
	if (maxIndex.size() == 1) // �ֺ��� �ϳ����
		fre = maxIndex[0]; // ù��° ���
	else // �ֺ��� �ϳ� �̻��̶�� 
		fre = maxIndex[1]; // �ι�° ���
	// ����
	ran = v[N - 1] - v[0]; // ���� ���

	// ���
	cout << avg << '\n';
	cout << mid << '\n';
	cout << fre << '\n';
	cout << ran << '\n';
}