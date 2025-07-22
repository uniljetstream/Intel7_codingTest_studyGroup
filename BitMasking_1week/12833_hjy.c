#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	// N�� N�� 2�� ������ XOR �����Ͽ� �ٸ� ��Ʈ�� ã��
	int diff = n ^ (~n + 1);

	// XOR ������� 1�� ������ ��� (Brian Kernighan's algorithm)
	int count = 0;
	while (diff != 0) {
		// �� ������ diff���� ���� �����ʿ� �ִ� 1��Ʈ�� �����մϴ�.
		diff &= (diff - 1);
		count++;

	}

	printf("%d\n", count);
	return 0;

}