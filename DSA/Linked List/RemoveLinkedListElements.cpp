//https://leetcode.com/problems/remove-linked-list-elements/
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

Node *deleteKey(Node *head, int key)
{
    if (head == NULL) // to remove [] this test case
        return head;
    
    // to remove[6,6,6,6] for 6 or [6,6,7,8] for 6
    while (head->data == key && head)  
        head = head->next;

    Node *temp = head;

    while (temp->next)
    {
        if (temp->next->data == key)
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }

    return head;
}
Node* removeEle(Node* head,int key)
{
    if (!head) return head;
        
		// Insert a dummy node to prime things so that we can maintain a
		// reference to the previous node in the loop
        Node* current = new Node(key+1);
        current->next =head;
        head = current;
        while (current && current->next) { 
            if (current->next->data == key) { 
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }
        
        return head->next;
}
int main()
{
    Node *head = takeInputTail();
    int key;
    cin >> key;

    print(removeEle(head, key));

    return 0;
}