//https://leetcode.com/problems/intersection-of-two-linked-lists/
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
Node *deleteDuplicates(Node *head)
{
    Node *dummy = new Node(0);
    dummy->next = head;
    Node *prev = dummy;

    while (head)
    {
        if (head->next && head->data == head->next->data)
        {
            //skip the nodes whose values are equal to heead.
            while (head->next && head->data == head->next->data)
            {
                head = head->next;
            }
            prev->next = head->next;
        }
        else
        {
            prev = prev->next;
        }
        head = head->next;
    }
    return dummy->next;
}
int main()
{
    Node *head = takeInputTail();

    print(deleteDuplicates(head));

    return 0;
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