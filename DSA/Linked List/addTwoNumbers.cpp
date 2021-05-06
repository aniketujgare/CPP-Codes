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
Node*takeInputHead()
{
    int data;
    cin>>data;
    Node* tail =NULL;
    Node* head = NULL;

    while (data !=-1)
    {
        Node* n = new Node(data);
        if(head == NULL)
        {
            head = n;
            tail =n;
        }
        else
        {
            n->next =head;
            head = n;
        }
        cin>>data;
        
    }
    return head;
    
}

int main()
{
    Node *l1head = takeInputHead();
    Node *l2head = takeInputHead();

    Node * n = new  Node(0);
    Node *dummy = n;
    Node *temp = dummy;
    int sum =0;
    int carry =0;
    while (l1head || l2head || carry)
    {
        if(l1head)
        {
            sum += l1head->data;
            l1head = l1head->next;
        }
        if (l2head)
        {
            sum+= l2head->data;
            l2head = l2head->next;
        }
        sum+=carry;
        Node * n = new Node((sum)%10);
        carry = sum/10;
        sum =0;
        temp->next = n ;
        temp = n;
        
    }
    print(dummy->next);

    return 0;
}