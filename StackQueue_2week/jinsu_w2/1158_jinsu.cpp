#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& tail, int value) {
    Node* newNode = new Node{ value, nullptr };
    if (!tail) {
        newNode->next = newNode;
        tail = newNode;
    }
    else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

void Josephus(Node*& tail, int k) {
    if (!tail) return; // 리스트가 비어있으면 종료

    Node* pdelete = tail->next;  //시작지점
    Node* temp = tail;

    cout << "<";

    while (tail)
    {
        for (int i = 0; i < k - 1; i++)
        {
            pdelete = pdelete->next;
            temp = temp->next;
        }

        cout << pdelete->data;

        if (pdelete == temp)
        {
            tail = NULL;
        }

        else
        {

            temp->next = pdelete->next;
            if (pdelete == tail)
                tail = temp;
            delete pdelete;
            pdelete = temp->next;
            cout << ", ";
        }
    }
    
    cout << ">" << endl;


}

int main()
{
    int n, k;
    Node* tail = NULL;

    cin >> n;
    cin >> k;

    for (int i = 1; i <= n; i++)
    {
        insert(tail, i);
    }

    Josephus(tail, k);

}