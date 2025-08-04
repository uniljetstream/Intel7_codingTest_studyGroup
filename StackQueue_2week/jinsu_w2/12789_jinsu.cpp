#include <iostream>
#include <queue>
#include <stack>


using namespace std;

int main()
{
	queue<int> q;  //1���� �ټ� �ִ°�
	stack<int> s;  //���ʿ� �� �� �ִ� ����

	int n; //amount of people
	cin >> n;
	int Number_Ticket;

	int comp_val = 1;

	for (int i = 0; i < n; i++)
	{
		cin >> Number_Ticket;
		q.push(Number_Ticket);
	}

	while (!q.empty())
	{
		int value = q.front();
		if (value == comp_val)
		{
			q.pop(); //���ÿ� �����ʰ� ����
			comp_val++;
		}

		else
		{
			s.push(value);
			q.pop();  //���ÿ� �ְ�����
		}

		while (!s.empty() && s.top() == comp_val)
		{
			s.pop();
			comp_val++;
		}


	}




	if (s.empty())
		cout << "Nice";
	else
		cout << "Sad";



}