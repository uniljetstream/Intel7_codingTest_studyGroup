#include <stack>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	stack<string> s;
	int num;
	cin >> num;
	cin.ignore();
	for (int i = 0; i < num; i++)
	{
		string words;
		getline(cin, words);
		string plus = "";
		for (int i = 0; i < words.size(); i++)
		{
			char c = words[i];
			if (c == ' ')
			{
				if (!(plus.empty()))
				{
					s.push(plus);
					plus = "";
				}
			}
			else
			{
				plus = plus + c;
			}
		}

		if (!plus.empty())
		{
			s.push(plus);
		}
		cout << "Case #" << i + 1 << ": ";
		while (!(s.empty()))
		{
			cout << s.top();
			s.pop();

			if (!s.empty())
			{
				cout << " ";
			}
		}
		cout << endl;

	}
	return 0;
}