#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	vector<string> strings(n);
	

	for (int i = 0; i < n; i++)
	{
		getline(cin, strings[i]);
	}

	for (int i = 0; i < n; i++)
	{
		stack <string> stack_string;
		istringstream iss(strings[i]);
		string word;
		cout << "Case #" << i+1 << ": ";
		while (iss >> word)
		{
			stack_string.push(word);
		}
		while (!stack_string.empty())
		{
			cout << stack_string.top() << " ";
			stack_string.pop();
		}
		cout << endl;
	}

}
