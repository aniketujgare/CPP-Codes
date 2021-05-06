//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
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
Node *reverseLL(Node *head);
int getDecimalValue(Node* head) {
    head = reverseLL(head);
        int ans =0, i= 0;
        while (head)
        {
            ans+= pow(2,i) * head->data;
            i++;
            head= head->next;
        }
        return ans;
        
    }
int main()
{
    Node *head = takeInputTail();
    cout<<getDecimalValue(head);
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
Node *reverseLL(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr)
    {
        Node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}