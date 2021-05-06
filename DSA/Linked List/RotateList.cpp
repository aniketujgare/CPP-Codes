//https://leetcode.com/problems/rotate-list/
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
int lengthOfLL(Node *head);
Node *rotate(Node *head, int k)
{
    if (!head)
        return NULL;
    Node *temp = head->next;

    int length = lengthOfLL(head);
    if (k > length)
        k = (k % length);
    while (k--)
    {
        while (temp)
        {
            swap(head->data, temp->data);
            temp = temp->next;
        }
        temp = head;
    }
    return head;
}
int main()
{
    Node *head = takeInputTail();
    int k;
    cin >> k;
    print(rotate(head, k));
    return 0;
}
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