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
Node *partitionList(Node *head, int x)
{
    if (!head || !head->next)
        return head;

    Node *dummy1 = new Node(0);
    Node *low = dummy1;

    Node *dummy2 = new Node(0);
    Node *high = dummy2;

    while (head)
    {
        if (head->data < x)
        {
            low->next = head;
            low = low->next;
        }
        else
        {
            high->next = head;
            high = high->next;
        }

        head = head->next;
    }
    low->next = dummy2->next;
    high->next = NULL;
    return dummy1->next;
}
int main()
{
    Node *head = takeInputTail();
    int x;
    cin >> x;
    print(partitionList(head, x));
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