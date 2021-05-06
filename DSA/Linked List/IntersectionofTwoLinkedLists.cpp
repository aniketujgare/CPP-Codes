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
Node *getIntersectionNode(Node *headA, Node *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;

    Node *a = headA;
    Node *b = headB;

    //if a & b have different len, then we will stop the loop after second iteration
    while(a!=b)
    {
        //for the end of iteration, we just reset the pointer to the head of another linkedlist
        a = (a==NULL) ? headB : a->next;
        b = (b==NULL) ? headA : b->next;
    }
    return a;
}
int main()
{
    Node *head = takeInputTail();
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
