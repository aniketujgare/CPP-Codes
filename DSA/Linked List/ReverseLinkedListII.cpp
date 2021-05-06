//https://leetcode.com/problems/reverse-linked-list-ii/
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

Node *reverseNEle(Node *head, int left, int right)
{
    if (left==right) // handling same ele reverse
        return head;
    Node *h1 = NULL;
    Node *s = head;
    int steps = left - 1;

    while (steps--)
    {
        h1 = s;
        s = s->next;
    }
    // cout<< h1->data<<" "<<s->data<<endl;
    Node *prev = NULL;
    Node *curr = s;
    Node *next = NULL;

    steps = right - left + 1;
    while (steps--)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if (left == 1) // Reverse from 1st node
    {
        head->next = curr;
        head = prev;
    }
    else
    {
        h1->next = prev;
        s->next = curr;
    }
    return head;
}
int main()
{
    Node *head = takeInputTail();

    print(reverseNEle(head, 1, 1));

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