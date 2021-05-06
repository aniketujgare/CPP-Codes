//https://leetcode.com/problems/palindrome-linked-list/

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

bool isPalindrome(Node *head)
{

    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    if (head == NULL || head->next == NULL)
        return true;

    Node *fast = head->next;
    while (fast && fast->next)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        fast = fast->next->next;
    }
    if (fast == NULL)
        curr = curr->next;
    else
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    while (curr && prev)
    {
        if (curr->data != prev->data)
            return false;
        curr = curr->next;
        prev = prev->next;
    }
    return true;
}

int main()
{
    Node *head = takeInputTail();



    return 0;
}