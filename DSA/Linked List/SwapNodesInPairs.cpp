//https://leetcode.com/problems/partition-list/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *takeInputTail();
void print(Node *head);

Node *swapPairs(Node *head)
{

    if (!head || !head->next)
        return head;

    Node *low = head;
    Node *high = head->next;

    while (low && high)
    {
        swap(low->data, high->data);

        if (!high->next)
            return head;
        low = high->next;

        if (!low->next)
            return head;
        high = low->next;
    }
    return head;
}

int main()
{
    Node *head = takeInputTail();
    print(swapPairs(head));
    return 0;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node *takeInputTail()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }

        cin >> data;
    }
    return head;
}