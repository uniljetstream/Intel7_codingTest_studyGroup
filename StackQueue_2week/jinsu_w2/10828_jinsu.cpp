#include <iostream>
#include <sstream>
#include <string>

using namespace std;


int* pstack;
int cnt = 0; 

void push(int a)
{	
	*pstack = a;
	pstack++;
	cnt++;
}

void pop()
{	
	if (cnt)
	{	
		pstack--;
		int a = *pstack;
		cout << a << endl;
		cnt--;
	}
	else
		cout << -1 << endl;
}

void size(void)
{	
	cout << cnt << endl;
	
}

void empty()
{
	if (cnt)
		cout << 0 << endl;
	else
		cout << 1 << endl;
}

void top()
{	
	if (!cnt)
		cout << -1 << endl;
	else
		cout << *(pstack-1) << endl;
	
}

int main()
{
	int stack[10000] = {0};
	pstack = stack;

	int n;
	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; i++)
	{	

		string str;
		getline(cin, str);
		stringstream ss(str);
		string cmd;
		int arg;

		ss >> cmd >> arg;  // 공백 기준으로 분리

		if (cmd == "push") {
			push(arg);  // push(4) 호출됨
		}
		else if (cmd == "pop")
		{
			pop();
		}
		else if (cmd == "size")
		{
			size();
		}
		else if (cmd == "empty")
		{
			empty();
		}
		else if(cmd == "top")
			top();
	}


}
