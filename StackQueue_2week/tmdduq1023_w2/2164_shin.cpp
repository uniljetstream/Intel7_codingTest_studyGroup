#include <queue>
#include <iostream>
using namespace std;
int main()
{
	queue<int> q;
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		q.push(i);
		//cout << q.back() << endl;
	}

	while (q.size() > 1)
	{
		//cout << "나간 숫자 :" << q.front() << endl;
		q.pop();
		int b = q.front();
		q.pop();
		q.push(b);
		//cout << "이동한 숫자 :" << q.front() << endl;

	}
	cout << q.front() << endl;
	return 0;
}