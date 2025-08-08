#include <iostream>
#include <queue>
#include <stack>


using namespace std;

int main()
{
	queue<int> q;  //1열로 줄서 있는곳
	stack<int> s;  //왼쪽에 들어갈 수 있는 공간

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
			q.pop(); //스택에 넣지않고 제거
			comp_val++;
		}

		else
		{
			s.push(value);
			q.pop();  //스택에 넣고제거
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