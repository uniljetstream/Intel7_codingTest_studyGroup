#include <iostream>
#include <sstream>
#include <string>

using namespace std;


class linked_list
{
public:
	int data;
	linked_list* next = NULL;

};

linked_list* head = NULL;
linked_list* tail = NULL;

void push(int a)
{
	linked_list* newNode = new linked_list;
	newNode->data = a;
	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
}

void pop()
{
	if (head == NULL)
	{
		cout << -1 << endl;
	}
	else
	{
		linked_list* temp;
		temp = head;
		cout << head->data << endl;
		head = head->next;
		delete temp;
		if (head == NULL)
			tail = NULL;
	}

}

void size()
{
	linked_list* temp = head;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	cout << count << endl;
}

void empty()
{
	if (head == NULL)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}

void front()
{
	if (head != NULL)
		cout << head->data << endl;
	else
		cout << -1 << endl;

}

void back()
{
	if (tail != NULL)
		cout << tail->data << endl;
	else
		cout << -1 << endl;

}


int main()
{
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

		ss >> cmd;

		if (cmd == "push") {
			ss >> arg;  // 공백 기준으로 분리
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
		else if (cmd == "front")
		{
			front();
		}
		else if (cmd == "back")
		{
			back();
		}
	}


}

