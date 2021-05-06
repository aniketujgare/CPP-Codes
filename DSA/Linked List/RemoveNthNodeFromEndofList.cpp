//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
int lengthOfLL(Node *head)
{
    int count = 0;
    while (head)
    {
        head = head->next;
        count++;
    }
    return count;
}
Node *deleteNodeFromBack(Node *head, int n)
{
    int len = lengthOfLL(head);

    if (n == len) // For [1 2 3], n=3
        return head->next;

    Node *temp = head;
    int steps = len - n - 1;
    while (steps--)
    {
        temp = temp->next;
    }
    Node *node = temp->next->next;
    temp->next = node;
    return head;
}
int main()
{
    Node *head = takeInputTail();
    int n;
    cin >> n;
    print(deleteNodeFromBack(head, n));
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